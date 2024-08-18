 #include<bits/stdc++.h>
 using namespace std;
  class Node{
     public:
         int val;
         Node* next;
         Node* prev;
     Node(int val){
         this->val = val;
         this->next = NULL;
         this->prev = NULL;
     }
  };
  void insert_at_position(Node *&head, Node *&tail, int pos, int val,int size)
  {
    if(head==NULL)
    {
        head = new Node(val);
        tail = head;
    }else
    {
        if(pos==0)
        {
            Node *temp = new Node(val);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        else if(pos==size)
        {
            Node *temp = new Node(val);

            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        else
        {
            int  i =0;
            Node *temp = head;
            while(i<pos-1)
            {
                temp = temp->next;
                i++;
            }
            Node *new_node = new Node(val);
            new_node->next = temp->next;
            temp->next->prev = new_node;
            new_node->prev = temp;
            temp->next = new_node;
        }

    }
  }
  int get_size(Node *head)
  {
    int size =0;
    Node *temp = head;
    while(temp!=NULL)
    {
        temp= temp->next;
        size++;
    }

    return size;
  }
  void print(Node *head, Node *tail)
  {
    Node *temp = head;
    cout<<"L -> ";
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
    temp = tail;
    cout<<"R -> ";
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
  }
 int main()
 {

    Node *head = NULL;
    Node *tail = NULL;
    int tc;
    cin>>tc;
    while(tc--){
        int index ,val;
        cin>>index>>val;
        int size = get_size(head);
        if(index<0 || index>size)
        {
            cout<<"Invalid"<<endl;
        }
        else
        {
            insert_at_position(head,tail,index,val,size);
            print(head,tail);
        }
    }
    return 0;
 }