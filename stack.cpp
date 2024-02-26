#include<iostream>


using namespace std;


class Stack{

    //prpoperties
    public:
       int *arr;
       int top;
       int size;

    //beahviour 
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
           
           if(size-top > 1){
            top++;
            arr[top] = element;
           }
           else{
            cout<<"stack overflow"<<endl;
           }
    
    }
    void pop(){
         if(top>=0){
            top--;

         }
         else{
            cout<<"Stack underflow"<<endl;
         }
    }
    int peek(){
        if(top>=0)
         return arr[top];
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }

    }
    bool empty(){
          
          if(top==-1){
            return true;
          }

          else{
            return false;
          }
            
    }



};

int main(){

    /*stack<int> s;

    s.push(2);
    s.push(3);

    s.pop();


    cout<<"top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
*/
   Stack s(2);

    s.push(2);
    s.push(3);

    s.pop();
    s.pop();


    cout<<"top element "<<s.peek()<<endl;

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
}