 #include<bits/stdc++.h>
 using namespace std;
  class Node{
     public:
         int val;
         Node* prev;
         Node* next;
     Node(int val){
         this->val = val;
         this->prev = NULL;
         this->next = NULL;
     }
  };
  class Stack{
    public:
    Node* head ;
    Node* tail;
    Stack()
    {
        head = tail = NULL;
    }
    void push(int val)
    {
        if(head==NULL)
        {
            head  = new Node(val);
            tail = head;
            return;
        }
        Node* newNode = new Node(val);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        if(tail->prev==NULL)
        {
            delete tail;
            tail = NULL;
            head = NULL;
            return;
        }
        Node *temp = tail;
        tail->prev->next = NULL;
        tail = tail->prev;
        delete temp;

    }
    int top()
    {
        return tail->val;
    }
    bool empty()
    {
        return head==NULL;
    }

  };
  class Queue{
    public:
    Node* head ;
    Node* tail;
    Queue()
    {
        head = tail = NULL;
    }
    void push(int val)
    {
        if(head==NULL)
        {
            head  = new Node(val);
            tail = head;
            return;
        }
        Node* newNode = new Node(val);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        
        Node* toDelete = head;
        if (head->next == NULL) {
            head = tail = NULL;
        } else {
            head = head->next;
            head->prev = NULL;
        }
        delete toDelete;

    }
    int front()
    {
        return head->val;
    }
    bool empty()
    {
        return head==NULL;
    }

  };
 int main()
 {

     int n,m;
    cin>>n>>m;
    Stack st ;
    Queue q;
    for(int i =0;i<n;i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    for(int i =0;i<m;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }

    if(n!=m)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    // cout<<"stack"<<endl;
    // while(!st.empty())
    // {
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    // cout<<"Queue"<<endl;
    // while(!q.empty())
    // {
    //     cout<<q.front()<<endl;
    //     q.pop();
    // }

    while(!st.empty())
    {
        if(st.top()!=q.front())
        {
            cout<<"NO"<<endl;
            return 0;
        }
        st.pop();
        q.pop();
    }
    cout<<"YES"<<endl;
    
    return 0;
 }