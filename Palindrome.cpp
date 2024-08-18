 #include<bits/stdc++.h>
 using namespace std;
  class Node{
     public:
         int val;
         Node *prev;
         Node* next;

     Node(int val){
         this->val = val;
         this->next = NULL;
         this->prev = NULL;
     }
  };
 int main()
 {

    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while(cin>>value)
    {
        if(value==-1)
        {
            break;
        }
        Node *newNode = new Node(value);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = tail->next;
        }
    }
    Node *left = head;
    Node *right = tail;
    while(left!=right && left->next!=right)
    {
        if(left->val!=right->val)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        left = left->next;
        right = right->prev;
    }
    if(left->val!=right->val)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;

    
    return 0;
 }