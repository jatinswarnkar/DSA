#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target , int n , int m){
   for(int i = 0 ;i<n;i++){
        for(int j = 0 ;j<m;j++){

        if(arr[i][j]==target){
            return 1;
        }
    }
    }
  return 0;
}


// printing the row-wise sum
void printSum(int arr[][4],int n , int m){
   
  for(int i = 0 ;i<n;i++){
        int sum = 0 ;
        for(int j = 0 ;j<m;j++){

        sum+=arr[i][j];
    }
       cout<<sum<<" ";
           
    }

}

int largestRowSum(int arr[][4],int n , int m){
   
  int maxi = INT_FAST8_MIN;

  for(int i = 0 ;i<n;i++){
        int sum = 0 ;
        for(int j = 0 ;j<m;j++){

        sum+=arr[i][j];
    }
       if(sum>maxi){
        maxi = sum;
       }
           
    }
    return maxi;

}
 

int main(){

   int row = 3;
   int col = 4;
   int arr[3][4]  = {1,54,3,4,44,8,9,32,11,12,21,9};


   /*for(int i = 0 ;i<row;i++){
        for(int j = 0 ;j<col;j++){

        cin>>arr[i][j];
    }
    }
   */
    for(int i = 0 ;i<row;i++){
        for(int j = 0 ;j<col;j++){

        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
   
   if(isPresent(arr,8,row,col)){
    cout<<"element found"<<endl;
   }
   else{
    cout<<"element not found"<<endl;
   }
   
   printSum(arr,row,col);
   cout<<endl;
   cout<<"Maximum sum is -> "<< largestRowSum(arr,row,col);

}