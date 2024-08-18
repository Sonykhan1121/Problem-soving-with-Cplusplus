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
int find_index(Node *head,int value)
{
    Node *temp = head;
    int index = 0;
    while(temp!=NULL)
    {
        if(temp->val==value)
        {
            return index;
        }
        index++;
        temp = temp->next;
    }
    return -1;
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

 int main()
 {

    int tc ;
    cin>>tc;
    while(tc--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while(true)
        {
            int now;
            cin>>now;
            if(now==-1)
            break;
            add_to_tail(head,tail,now);

        }
        int search_value ;
        cin>>search_value;
        int index = find_index(head,search_value);
        cout<<index<<endl;




    }
    
    return 0;
 }