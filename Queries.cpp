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

void insert_at_head(Node *&head,int val)
{
   if(head==NULL)
        {
            head = new Node(val);
            
        }
        else
        {
            Node* temp = new Node(val);
            temp->next = head;
            head = temp;
        }
}
void insert_at_tail(Node *&head,int val)
{
    if(head==NULL)
    {
        insert_at_head(head,val);
        return;
    }
    Node *temp = head;
    while(temp->next !=NULL)
    {
        temp = temp->next;
    }

    temp->next =new  Node(val);
}


void print_linked_list(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout<<endl;
}
void delete_vth_position(Node *&head, int pos)
{
    if(head==NULL)
    return;
    Node *temp = head;
    if(pos == 0)
    {
        head = head->next;
        delete temp;
        return;
    }
    for(int i=0; temp!=NULL && i<pos-1; i++)
    {
        temp = temp->next;
    }
    if(temp==NULL || temp->next==NULL)
        return;
    Node *next = temp->next->next;
    delete temp->next;
    temp->next = next;
}


int main()
{
    Node *head  =NULL;
    
    int tc ;
    cin>>tc;
    while(tc--)
    {
        int type ,value;
        cin>>type>>value;
        if(type==0)
        {
            insert_at_head(head,value);
            print_linked_list(head);
        }
        else if(type==1)
        {
            insert_at_tail(head,value);
            print_linked_list(head);
        }
        else if(type==2)
        {
            delete_vth_position(head,value);
            print_linked_list(head);

        }
    }
}