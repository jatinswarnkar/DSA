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

void insertNode(Node* &tail ,int element, int d){
   //assuming the element present in list
    if(tail==NULL){  
     //new node creation
    Node *temp = new Node(d);
     tail = temp;
     temp->next = temp;

    }
    else{

        Node* curr = tail;

        while(curr->data!=element){
            curr = curr->next;
        }
    Node *temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
      
        
        
    }


}

 void deleteNode(Node* &tail , int value){

   if(tail==NULL){
    cout<<"list is empty"<<endl;
    return;
   }

   else{
       Node* prev = tail;
       Node*curr = prev->next;

       while(curr-> data != value){

          prev = curr;
          curr = curr->next;

       }

       prev->next = curr->next;

     //1 node linked list
     if(curr == prev){
        tail = NULL;
    }

     else if(tail==curr){
        tail = prev;
    }
       curr->next = NULL;
       delete curr;




   }

}

void print(Node* &tail){
    if(tail==NULL){
    cout<<"List is empty"<<endl;
    return;
    }

    Node* temp = tail;
    do{

        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}

int main(){
    //cout<<n1->data<<endl;
    //cout<<n1->next<<endl;
    Node* tail = NULL;
     
     insertNode(tail,5,3);
     insertNode(tail,3,5);
     insertNode(tail,5,6);
     insertNode(tail,3,7);
     deleteNode(tail,6);
     print(tail);


    return 0;
}