#include<iostream>
using namespace std;


class Node {
   public:
   int data;
   Node *next;

   Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void insertatHead(Node* &head , int d){

    //new node creation
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;


}

void insertatTail(Node* &tail , int d){
   
   //new node creation
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;

}

void insertatPosition(Node* &head,Node* &tail,int pos , int n){
    
    //insert at start
    if(pos==1){
        insertatHead(head,n);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertatTail(tail,n);
        return;
    }

    Node* Nodetoinsert = new Node(n);

    Nodetoinsert->next = temp->next;
    temp->next = Nodetoinsert;


}

void deleteNode(int position, Node* &head){
  
  //deleting first node 
  if(position==1){
    Node* temp = head;
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

int main(){
    
    Node* n1 = new Node(10);
    //cout<<n1->data<<endl;
    //cout<<n1->next<<endl;
    
    Node* head = n1;
    Node* tail = n1;

    insertatTail(tail,12);

    insertatHead(head,15);

    print(head);

    insertatPosition(head,tail,3,20);

    print(head);

    deleteNode(3,head);

    print(head);


    return 0;
}