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
 void print_leaf_node_reverse_order(Node *root)
 {
     if(root==NULL)
         return;
     
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node * f = q.front();
        q.pop();
       

        if(f->left!=NULL)
        {
            q.push(f->left);
        }
        if(f->right!=NULL)
        {
            q.push(f->right);
        }
        if(f->left==NULL && f->right==NULL)
        {
            ans.push_back(f->val);
        }


    }
    sort(ans.begin(), ans.end(), greater<int>());
    for(auto x:ans)
        cout<<x<<" ";
    cout<<endl;
 }
 int main()
 {
    Node *root  = input_tree();
    print_leaf_node_reverse_order(root);
    return 0;
 }