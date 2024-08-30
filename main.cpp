 #include<bits/stdc++.h>
 using namespace std;
class Node{
    public:
    int val;
    Node *prev=NULL;
    Node *next=NULL;
    Node(int val)
    {
        this->val = val;
    }
};
class MyLinkedList {
public:
    Node *head;
    Node *tail;
    int size ;
    
    MyLinkedList() {
        head =tail = NULL;
        size=0;
    }
    
    int get(int index) {
        if(index>=size|| index<0)
        return -1;

        Node *temp = head;
        int i =0;
        while(i<index)
        {

            temp = temp->next;
            i++;
        }
        return temp->val;

    }
    
    void addAtHead(int val) {
        if(head==NULL)
        {
            head = new Node(val);
            tail = head;
        }
        else
        {
            Node *temp = new Node(val);
            head->prev = temp;
            temp->next = head;
            head = temp;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* temp = new Node(val);

        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
      if(index>size||index<0)
      {
         return;
      }
        Node *temp = head;
        if(index==0)
        {
            addAtHead(val);
        }
        else if(index==size)
        {
         addAtTail(val);
        }
        else
        {
            int  i =0;
            while(i<index-1)
            {
                temp = temp->next;
                i++;
            }
            Node *now = new Node(val);
            now->next = temp->next;
            temp->next->prev =now;
            now->prev = temp;
            temp->next = now;
        size++;
        }
    }
    
    void deleteAtIndex(int index) {
      if(index<0|| index>=size)
      {
         return ;
      }
        if(head==NULL)
        {
            return;
        }
        Node *temp = head;
        if(index==0)
        {
            head = head->next;
          if(head!=NULL)  head->prev  = NULL;
          if(head==NULL)
          tail = NULL;
         
        }
        else if(index==size-1)
        {
          tail = tail->prev;
          if(tail!=NULL) tail->next = NULL;
          if(tail==NULL)
          head = NULL;
        }
        
        else 
        {
            
            int  i =0;
            while(i<index-1)
            {
                temp = temp->next;

                i++;
            }
            temp->next = temp->next->next;
           if(temp->next!=NULL) temp->next->prev = temp;
           
        }
        size--;
    }
};


 int main()
 {
   MyLinkedList* obj = new MyLinkedList();
   obj->addAtHead(2);            // Add 2 at head
   Node *temp = obj->head;
   while(temp!=NULL)
   {
      cout<<temp->val<<"*";
      temp = temp->next;
   }
   cout<<endl;
    obj->deleteAtIndex(1); 
   temp = obj->head;
   while(temp!=NULL)
   {
      cout<<temp->val<<" ";
      temp = temp->next;
   }   
       // Try to delete node at index 1 (will have no effect)
       cout<<endl;
    obj->addAtHead(2);            // Add 2 at head
    obj->addAtHead(7);            // Add 7 at head
    obj->addAtHead(3);            // Add 3 at head
    obj->addAtHead(2);            // Add 2 at head
    obj->addAtHead(5);   
    temp = obj->head;
   while(temp!=NULL)
   {
      cout<<temp->val<<" ";
      temp = temp->next;
   }   
       // Try to delete node at index 1 (will have no effect)
       cout<<endl;         // Add 5 at head
    obj->addAtTail(5);            // Add 5 at tail
    int value = obj->get(5);      // Get the value at index 5
    cout << "Value at index 5: " << value << endl;  // Print the retrieved value
    obj->deleteAtIndex(6);        // Delete the node at index 6
    obj->deleteAtIndex(4);   
    temp = obj->head;
   while(temp!=NULL)
   {
      cout<<temp->val<<" ";
      temp = temp->next;
   }   
       // Try to delete node at index 1 (will have no effect)
       cout<<endl;  
  
  

 }
  
 