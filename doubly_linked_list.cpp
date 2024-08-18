 #include<bits/stdc++.h>
 using namespace std;
  class Node{
     public:
         int val;
         Node *prev;
         Node *next;
     Node(int val){
         this->val = val;
         this->next = NULL;
         this->prev = NULL;
     }
  };
  void insert_at_head(Node *&head,Node *&tail, int val)
  {
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = head;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }
  int get_size(Node *head)
  {
    int size = 0;
    Node *temp = head;
    while(temp!=NULL)
    {
        temp = temp->next;
        size++;
    }


    return size;
  }
  void insert_at_tail(Node *&head,Node *&tail,int val)
  {
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = head;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
  void insert_at_position(Node *&head,Node *&tail, int position,int val)
  {
    int size = get_size(head);
    if(position == 0)
    {
        insert_at_head(head,tail,val);
        return;
    }
    else if(size==position)
    {
        insert_at_tail(head,tail,val);
        return;
    }
    else if(size<=position)
    {
        cout<<"Invalid position. Size is "<<size<<endl;
        return;
    }
    Node *newNode = new Node(val);
    Node *temp = head;
    for(int i =0;i<position-1;i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;

  }
  void delete_at_head(Node *&head,Node *&tail)
  {
    if(head == NULL)
    {
        cout<<"List is empty. Cannot delete from head."<<endl;
        return;
    }
    Node *del = head;
    head = head->next;
    head->prev = NULL;
    delete del;
  }
  void delete_at_tail(Node *&head,Node *&tail)
  {
    if(head == NULL)
    {
        cout<<"List is empty. Cannot delete from tail."<<endl;
        return;
    }
    Node *del = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete del;
  }
  void delete_at_position(Node *&head, Node *&tail, int position)
  {
    if(head == NULL)
    {
        cout<<"List is empty. Cannot delete from position."<<endl;
        return;
    }
    int size = get_size(head);
    if(position == 0)
    {
        delete_at_head(head,tail);
        return;
    }
    else if(position == size-1)
    {
        delete_at_tail(head,tail);
        return;
    }
    else if(position>=size)
    {
        cout<<"Invalid position. Size is "<<size<<endl;
        return;
    }
    Node *temp = head;
    for(int i=0;i<position-1;i++)
    {
        temp= temp->next;
    }
    Node *del = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete del;

  }
  
  
  void print(Node *head)
  {
     Node *temp = head;
     while(temp!= NULL)
     {
         cout<<temp->val<<" ";
         temp = temp->next;
     }
     cout<<endl;
     return;
  }
  void print_rev(Node *tail)
  {
    Node *temp = tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";

        temp = temp->prev;
    }
    cout<<endl;

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
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    print(head);
    print_rev(tail);
    return 0;
 }