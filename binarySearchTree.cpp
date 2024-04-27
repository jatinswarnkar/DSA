#include<iostream>
#include<queue>
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

node* insertInBST(node* &root,int data){

    //base case
    if(root==NULL){
        root = new node(data);

        return root;
    }

    if(data>root->data){
        root->right = insertInBST(root->right,data);
    }

    else{

       root->left = insertInBST(root->left,data);

    }

 return root;

}

void takeInput(node* &root){
 
 int data;
 cin>>data;

 while(data!=-1){
    root = insertInBST(root,data);
    cin>>data;
    }
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

node* minVal(node* root){

    node* temp = root;

    while(temp!=NULL){
        temp = temp->left;
    }

    return temp;

}


node* deleteFromBST(node* root , int val){

    //base case
    if(root==NULL){
     return root;
    }

    if(root->data==val){

      //0 child
      if(root->left == NULL && root->right == NULL){
        delete root;
        return NULL;
     }

      //1 child
        if(root->left != NULL && root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }

        if(root->left == NULL && root->right != NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }

      //2 child
      if(root->left != NULL && root->right != NULL){
           int mini = minVal(root->right)->data;
           root->data = mini;
           root->right = deleteFromBST(root->right,mini);
           return root;
        }

    }

    else if(root->data >val){
        root->left = deleteFromBST(root->left,val);
        return root;
    }

    else{
        root->right = deleteFromBST(root->right,val);
        return root;
    }
}


int main(){
   
   node* root = NULL;

   cout<<"Enter data to create BST "<<endl;
   takeInput(root);

   deleteFromBST(root,50);

   cout<<"Printing the BST"<<endl;
   levelOrderTraversal(root);

   return 0;

   // inorder of bst is sorted 

  //learn about morris traversal

}