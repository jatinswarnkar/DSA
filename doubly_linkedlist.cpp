#include<iostream>
using namespace std;


class Node {
   public:
   int data;
   Node *next;
   Node *prev;

   Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
   //desturctor

};

void insertatHead(Node* &head , Node* &tail  , int d){

    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }


   else{
    //new node creation
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
   }

}

void insertatTail(Node* &head , Node* &tail , int d){

    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
   
   else{
   //new node creation
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
   }

}

void insertatPosition(Node* &head,Node* &tail,int pos , int n){
    
    //insert at start
    if(pos==1){
        insertatHead(head,tail,n);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertatTail(head,tail,n);
        return;
    }

    Node* Nodetoinsert = new Node(n);

    Nodetoinsert->next = temp->next;
    temp->next->prev = Nodetoinsert;
    Nodetoinsert->prev = temp;
    temp->next = Nodetoinsert;


}


void deleteNode(int position, Node* &head){
  
  //deleting first node 
  if(position==1){
    Node* temp = head;
    temp->next->prev = NULL;
    head = head->next;
    //memory free
    temp->next = NULL;
    delete temp;
  }

  else{
     
     Node* curr = head;
     Node* prev = NULL;

     int cnt =1;

     while(cnt<position){
         prev = curr;
         curr = curr->next;
         cnt++;
     }
     curr->prev = NULL;
     prev->next = curr->next;
     curr->next = NULL;
     delete curr;

  }



}

void print(Node* &head){

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getlength(Node* &head){
    
    int len = 0;
    Node* temp = head;

    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}


int main(){
    
     Node* node1 = new Node(10);
     Node* head = node1;
     Node* tail = node1;

     print(head);

     insertatHead(head,tail,12);
     insertatTail(head,tail,22);
     print(head);

     insertatPosition(head,tail,4,100);
     deleteNode(1,head);
     print(head);


     
     
    return 0;

}