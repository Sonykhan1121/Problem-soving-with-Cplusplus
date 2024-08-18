import requests
from bs4 import BeautifulSoup
import os
import zipfile
import re
from urllib.parse import urlsplit, unquote
from PIL import Image
from io import BytesIO

# URL of the website with wallpapers
url = 'https://unsplash.com/wallpapers/art'

# Directory to save wallpapers
wallpaper_dir = 'wallpapers'
os.makedirs(wallpaper_dir, exist_ok=True)

# Function to sanitize filenames
def sanitize_filename(filename):
    # Remove invalid characters from filename
    return re.sub(r'[\\/*?:"<>|]', "_", filename)

# Function to download an image and convert to PNG
def download_and_convert_image(img_url, folder):
    response = requests.get(img_url)
    if response.status_code == 200:
        # Parse the URL to remove query parameters and get the path
        url_path = urlsplit(img_url).path
        # Decode any URL-encoded characters
        img_name = unquote(os.path.basename(url_path))
        # Sanitize the filename
        img_name = sanitize_filename(img_name)
        # Create the full path with PNG extension
        img_path = os.path.join(folder, os.path.splitext(img_name)[0] + '.png')
        
        # Open the image and convert to PNG
        image = Image.open(BytesIO(response.content))
        image.save(img_path, 'PNG')
        return img_path
    return None

# Get the webpage content
response = requests.get(url)
soup = BeautifulSoup(response.content, 'html.parser')

# Find all image tags
img_tags = soup.find_all('img')

# Download and convert all images
downloaded_images = []
for img in img_tags:
    srcset = img.get('srcset')
    if srcset:
        # Extract the highest resolution URL from srcset
        img_url = srcset.split(',')[-1].split()[0]
        if img_url.startswith('http'):
            img_path = download_and_convert_image(img_url, wallpaper_dir)
            if img_path:
                downloaded_images.append(img_path)

# Create a zip file
zip_filename = 'wallpapers.zip'
with zipfile.ZipFile(zip_filename, 'w') as zipf:
    for img in downloaded_images:
        zipf.write(img, os.path.basename(img))

print(f'All wallpapers downloaded, converted to PNG, and zipped into {zip_filename}')
