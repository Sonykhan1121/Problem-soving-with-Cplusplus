 #include<bits/stdc++.h>
 using namespace std;
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
        cout << temp->val << " ";
        temp = temp->next;
    }
}

 
 int main()
 {
    Node *head1=NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int size1=0,size2=0;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        add_to_tail(head1,tail1,val);
        size1++;

    }
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        add_to_tail(head2,tail2,val);
        size2++;
    }
    if(size1!=size2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        Node *temp1 = head1;
        Node *temp2 = head2;
        while(temp1!=NULL)
        {
            if(temp1->val!=temp2->val)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        cout<<"YES"<<endl;
    }

    
    
    return 0;
 }