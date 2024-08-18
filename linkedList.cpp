#include <bits/stdc++.h>
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
 int get_size(Node *head){
    int size =0;
    Node * temp = head;
    while(temp!=NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
 }
void insert_at_tail(Node * &head, int value)
{
    Node *new_node = new Node(value);
    if(head==NULL)
    {
        head = new_node;
        return ;
    }
    else
    {
        Node *temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next  = new_node;
    }
}
void print_linked_list(Node *head)
{
    cout<<"Your linked list is :";
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insert_at_any_position(Node * &head, int position, int value)
{
    Node *new_node =  new Node( value);
    int i =0;
    Node *temp = head;
    if(position == 0)
    {
        new_node->next = head;
        head = new_node;
        return ;
    } 
     

    while(i<position-1)
    {
        temp = temp->next;
        if(temp==NULL)
        {
            cout<<"Invalid position"<<endl;
            return;
        }
        i++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
void delete_from_position(Node * &head, int position )
{
    Node *temp = head;
    int i=0;
    if(position ==0)
    {
        if(head==NULL)
        {
            cout<<"Invalid position"<<endl;
            return;
        }
        Node *deleted_node = head;
        head= head->next;
        delete deleted_node;
        return;
    }
    while(i<position-1)
    {
        temp = temp->next;
        if(temp->next==NULL)
        {
            cout<<"Invalid position"<<endl;
            return;
        }
        i++;
    }
    Node *deleted_node = temp->next;
    temp->next = temp->next->next;
    delete deleted_node;
}
void sort_linked_list(Node *head)
{
    for(Node *i = head;i->next != NULL; i= i->next)
    {
        for(Node *j = i->next;j!=NULL ;j = j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }

        }
    }
}
int main()
{
    Node *head=NULL;
    insert_at_tail(head,24000);
    insert_at_tail(head,5);
    insert_at_tail(head,244);
    insert_at_tail(head,24);
    insert_at_tail(head,245);
    insert_at_tail(head,214);
    print_linked_list(head);
    sort_linked_list(head);
    print_linked_list(head);
    return 0;
}