#include<iostream>
using namespace std;


//jatin swarnkar 
class Node{
    
    public:
    int data;
    Node* next;

    //
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    //destructor
    ~Node(){
        int value = this ->data;
        // memory free
        if(this ->next != NULL){
            delete next;
            this ->next = NULL;
        }
        cout<<"memory if free for node with data "<< value<<endl;
    }
};
void insertAtHead(Node * &head,int d){
    // new node create
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;
}
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = tail ->next;
}
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp ->data <<" ";
        temp = temp ->next;
    }
    cout<<endl;
}
void insertAtPosition(Node* & tail,Node* & head,int position ,int d){
    // insert at start position 
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp ->next;
        cnt++;
    }
    // inserting at last position 
    if(temp ->next == NULL){
        insertAtTail(tail,d);
        return ;
    }
    // creating node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert ->next = temp ->next;
    temp -> next = nodeToInsert;
}

void deletNode(int position,Node* & head){
    // deleting first or start node
    if(position ==1){
        Node* temp = head;
        head = head ->next;
        // memory free start node
        temp ->next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr =  head ;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr ->next;
            cnt++;
        }
        prev ->next = curr ->next;
        curr ->next = NULL;
        delete curr;
    }
}
// detect of cycle present in loop
Node* detectLoop(Node* head){
    if(head==NULL)
        return NULL;
    Node * slow = head;
    Node* fast = head;

    while(slow !=NULL && fast != NULL){
        fast = fast ->next;
        if(fast !=NULL){
            fast = fast ->next;
        }
        slow = slow ->next;

        if(slow== fast){
            cout<<"present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}
// get starting node of linked list
Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = detectLoop(head);
    Node * slow = head;
    while(slow != intersection){
        slow = slow ->next;
        intersection = intersection ->next;
    }
    return slow;
}
// remove loop in linked list
void RemoveLoop(Node* head){
    if(head == NULL)
        return;
    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp->next != startOfLoop){
            temp = temp->next;
    }
    temp ->next = NULL;
}

int main(){
    
    //create a new node 
    Node* node1 = new Node(50);
    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl;

    //head pointer to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);
    
    insertAtTail(tail,60);

    print(head);

    insertAtTail(tail,20);
    print(head);

    insertAtPosition(tail,head,4,11);
    print(head);

    cout<<"head "<<head ->data<<endl;
    cout<<"tail "<<tail ->data<<endl;

    deletNode(3,head);
    print(head);

    tail ->next = head -> next;

    if(detectLoop(head)){
        cout<<"cycle is present "<<endl;

    }
    else{
        cout<<"no cycle is present "<<endl;  
    }
    Node * loop = getStartingNode(head);
    cout<<"loop starts at "<<loop->data<<endl;

    RemoveLoop(head);
    print(head);

    
    return 0;
}