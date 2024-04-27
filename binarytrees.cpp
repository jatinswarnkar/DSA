#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
   public:
   int data;
   node* left;
   node* right;

   node(int d){
    this -> data = d;
    this -> left = NULL;
    this -> right = NULL;
   }

};


node* buildTree(node* root){
   
   cout<<"Enter the data:"<<endl;
  
   int data;
   cin>>data;
   root = new node(data);

   if(data==-1){
    return NULL;
   }

   cout<<"Enter data for inserting in left of "<<data<<endl;

   root->left = buildTree(root->left);

  cout<<"Enter data for inserting in right of "<<data<<endl;

   root->right = buildTree(root->right);

   return root;
   
   }

void levelOrderTraversal(node* root){

    queue<node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
         node* temp = q.front();
         q.pop();

         if(temp == NULL){ //purana level complete traverse ho gya haui 
             cout<<endl;
             if(!q.empty()){
                q.push(NULL);
            }
         }

        else{
         cout<<temp->data<<" ";
         
         if(temp->left){
            q.push(temp->left);
         }

         if(temp->right){
            q.push(temp->right);
         }

        }

    }

}


void inorder(node* root){
    //left root right 
    //base case
    if(root==NULL){
        return ;
    }

   //root means print
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);


}

void preorder(node* root){
    //root left right 
    //base case
    if(root==NULL){
        return ;
    }

 //root means print
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);


}

void postorder(node* root){
    // left right root
    //base case
    if(root==NULL){
        return ;
    }

    
    
    //root means print
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";


}

void builtFromLevelOrder(node* &root){

       queue<node*> q;
       
   cout<<"Enter the data:"<<endl;
  
   int data;
   cin>>data;
   root = new node(data);
       q.push(root);

       while(!q.empty()){

          node* temp = q.front();
          q.pop();

           cout<<"Enter  left  node for : "<<temp->data<<endl;
           int leftdata;
           cin>>leftdata;

           if(leftdata!=-1){
            temp->left = new node(leftdata);
            q.push(temp->left);
           }

            cout<<"Enter  right  node for : "<<temp->data<<endl;
           int rightdata;
           cin>>rightdata;

           if(rightdata!=-1){
            temp->right = new node(rightdata);
            q.push(temp->right);
           }


       }

}


int main(){

     node* root = NULL;
//creating a tree
   /* root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //level order
    cout<<"printing the levelorder traversal "<<endl;

   levelOrderTraversal(root);

   cout<<"Inorder traversel is"<<endl;

   inorder(root);
   cout<<endl;

    cout<<"preorder traversel is"<<endl;

   preorder(root);
   cout<<endl;

    cout<<"postorder traversel is"<<endl;

   postorder(root);
   cout<<endl;
*/

builtFromLevelOrder(root);
//1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
levelOrderTraversal(root);
    


    return 0;
}