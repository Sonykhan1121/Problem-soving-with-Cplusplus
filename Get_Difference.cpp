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
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int find_min_max_dif(Node *head)
{
    int mn = INT_MAX;
    int mx = INT_MIN; 
    Node *temp = head;
    while(temp!=NULL)
    {
        mn = min(mn,temp->val);
        mx = max(mx,temp->val);
        temp = temp->next;
    }
    return mx-mn;




}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        add_to_tail(head,tail,val);
    }
    cout<<find_min_max_dif(head)<<endl;
    return 0;
}
