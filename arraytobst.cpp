 #include<bits/stdc++.h>
 using namespace std;
 
 class Node{
    public:
        int val;
        Node *left;
        Node *right;

        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;

        }

 };
Node * convert(int a[],int size , int low, int high)
{
    if(low > high)
    {
        return NULL;
    }
    int mid = (low+high)/2;

    Node *root = new Node(a[mid]);
    root->left = convert(a,size,low,mid-1);
    root->right = convert(a,size,mid+1,high);
    return root;
}
 void level_order(Node *root)
 {
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node * f = q.front();
        q.pop();
        cout<<f->val<<" ";

        if(f->left!=NULL)
        {
            q.push(f->left);
        }
        if(f->right!=NULL)
        {
            q.push(f->right);
        }


    }

 }
 int main()
 {

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Node * root =convert(a,n,0,n-1);
    level_order(root);
    return 0;
 }