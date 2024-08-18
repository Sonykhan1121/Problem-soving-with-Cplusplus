import requests
from bs4 import BeautifulSoup
import pandas as pd

# Send a GET request to the website
url = "https://www.cricbuzz.com/live-cricket-scorecard/94903/miny-vs-sor-1st-match-major-league-cricket-2024"
response = requests.get(url)

# Parse the HTML content using BeautifulSoup
soup = BeautifulSoup(response.content, 'html.parser')

# Extract the match details
match_details = soup.find('div', {'class': 'cb-col cb-col-100 cb-scorecard'})
match_title = match_details.find('h2', {'class': 'cb-font-20'}).text.strip()
match_venue = match_details.find('div', {'class': 'cb-font-14'}).text.strip()
match_result = match_details.find('div', {'class': 'cb-font-20'}).text.strip()

# Extract the batting and bowling details
batting_details = soup.find_all('div', {'class': 'cb-col cb-col-100 cb-scrd-itms'})
batting_data = []
for batting_detail in batting_details:
    batsman_name = batting_detail.find('a', {'class': 'cb-text-link'}).text.strip()
    runs_scored = batting_detail.find('span', {'class': 'cb-font-14'}).text.strip()
    balls_faced = batting_detail.find_all('span', {'class': 'cb-font-14'})[1].text.strip()
    strike_rate = batting_detail.find_all('span', {'class': 'cb-font-14'})[2].text.strip()
    fours = batting_detail.find_all('span', {'class': 'cb-font-14'})[3].text.strip()
    sixes = batting_detail.find_all('span', {'class': 'cb-font-14'})[4].text.strip()
    batting_data.append([batsman_name, runs_scored, balls_faced, strike_rate, fours, sixes])

bowling_details = soup.find_all('div', {'class': 'cb-col cb-col-100 cb-scrd-itms cb-bwl-itms'})
bowling_data = []
for bowling_detail in bowling_details:
    bowler_name = bowling_detail.find('a', {'class': 'cb-text-link'}).text.strip()
    overs_bowled = bowling_detail.find_all('span', {'class': 'cb-font-14'})[0].text.strip()
    runs_conceded = bowling_detail.find_all('span', {'class': 'cb-font-14'})[1].text.strip()
    wickets_taken = bowling_detail.find_all('span', {'class': 'cb-font-14'})[2].text.strip()
    economy_rate = bowling_detail.find_all('span', {'class': 'cb-font-14'})[3].text.strip()
    bowling_data.append([bowler_name, overs_bowled, runs_conceded, wickets_taken, economy_rate])

# Create DataFrames from the extracted data
batsman_performance_df = pd.DataFrame(batting_data, columns=['Batsman Name', 'Runs Scored', 'Balls Faced', 'Strike Rate', '4s', '6s'])
bowler_performance_df = pd.DataFrame(bowling_data, columns=['Bowler Name', 'Overs Bowled', 'Runs Conceded', 'Wickets Taken', 'Economy Rate'])

# Print the extracted data
print("Match Title:", match_title)
print("Match Venue:", match_venue)
print("Match Result:", match_result)
print("\nBatsman Performance:")
print(batsman_performance_df)
print("\nBowler Performance:")
print(bowler_performance_df)