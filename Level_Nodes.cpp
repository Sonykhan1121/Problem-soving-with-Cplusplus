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
 Node* input_tree()
 {
    int val;
    cin>>val;
    Node *root ;
    if(val==-1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node*> q;
    if(root)
    {
        q.push(root);
    }
    while(!q.empty())
    {
        Node *f = q.front();
        q.pop();
        int l , r;
        cin>>l>>r;
        Node *left,*right;
        if(l==-1)
        {
            left = NULL;
        }
        else
        {
            left = new Node(l);
        }
        if(r==-1)
        {
            right = NULL;
        }
        else
        {
            right = new Node(r);
        }
        f->left = left;
        f->right = right;

        if(f->left)
        q.push(f->left);
        if(f->right)
        q.push(f->right);

    }
    return root;
 }
 void level_print(Node *root,int need)
 {
     if(root==NULL)
         return ;
    
    
     int mxdepth = 0;
    
    queue<pair<Node*,int>> q;
    q.push({root,mxdepth});
    vector<int> ans;
    while(!q.empty())
    {

        Node * f = q.front().first;
        mxdepth = q.front().second;
        q.pop();
       if(mxdepth==need)
       {
        ans.push_back(f->val);
       }
       
        
        if(f->left!=NULL)
        {
             
            q.push({f->left,mxdepth+1});
        }
        if(f->right!=NULL)
        {
            q.push({f->right,mxdepth+1});
        }
        
        


    }
    if(ans.empty())
    {
        cout<<"Invalid"<<endl;
        return ;
    }

    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    
 }
 int main()
 {
    Node *root  = input_tree();
    int level ;
    cin>>level;
    level_print(root,level);
    return 0;
 }