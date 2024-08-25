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
 
 bool search(Node *root, int x)
 {
    if(root==NULL)
        return false;

    if(x==root->val)
       return true;
    if(x<root->val)
        return search(root->left,x);
    return search(root->right,x);
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
    Node *root  = input_tree();
    // level_order(root);
    if(search(root,21))
    {
        cout<<"found the value"<<endl;
    }
    else
    {
        cout<<"Not found the value"<<endl;
    }
    return 0;
 }