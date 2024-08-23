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
 
 void left_tree(Node *root,vector<int> &leftside)
 {
    if(root==NULL)
    {
        return;
    }
    leftside.push_back(root->val);

   if(root->left!=NULL) left_tree(root->left,leftside);
   else 
   left_tree(root->right,leftside);
 }
 void right_tree(Node *root,vector<int> &rightside)
 {
    if(root==NULL)
    {
        return;
    }
    rightside.push_back(root->val);
   if(root->right!=NULL) right_tree(root->right,rightside);
   else right_tree(root->left,rightside);
 }
 int main()
 {
    Node *root  = input_tree();
    vector<int> leftside, rightside;
    
    left_tree(root->left,leftside);
    right_tree(root->right,rightside);
    reverse(leftside.begin(),leftside.end());
    for(auto i:leftside)
    {
        cout<<i<<" ";
    }
    cout<<root->val<<" ";
    for(auto j:rightside)
    {
        cout<<j<<" ";
    }
    cout<<endl;
    return 0;
 }