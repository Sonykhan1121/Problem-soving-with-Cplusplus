 #include<bits/stdc++.h>
 using namespace std;
  class Node{
     public:
         int val;
         Node* next;
     Node(int val){
         this->val = val;
         this->next = NULL;
     }
  };
 void add_to_tail(Node *&head, Node *&tail ,int val)
{
    if( head==NULL)
    {
        head = new Node(val);
        tail = head;
    }
    else
    {
        tail->next = new Node(val);
        tail = tail->next;
    }
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
 int main()
 {
    Node *head = NULL;
    Node *tail = NULL;
    while(true)
    {
        int value;
        cin>>value;
        if(value==-1)
        {
            break;
        }
        add_to_tail(head,tail,value);
    }
    // print_linked_list(head);
    bool visited[1005] = {false};
    Node *temp =head;
    Node *hold = NULL;
    visited[temp->val] = true;
    while(temp->next!=NULL)
    {
        if(!visited[temp->next->val])
        {
            visited[temp->next->val] =true;
            temp = temp->next;
        }
        else
        {
            hold  = temp->next;
            temp->next = temp->next->next;
            delete hold;
        }
    }

    print_linked_list(head);
    
    return 0;
 }