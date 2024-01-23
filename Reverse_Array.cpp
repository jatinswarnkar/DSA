#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n/2; i++){
             int temp = a[i]; 
            a[i] = a[n-1-i];
            a[n-1-i] = temp; 
            
    }
    for(int i=0; i<n; i++){
        cout<<" "<<a[i];
    }

    return 0;
}

void Mergetwosorted_Array(int arr1[], int n ,int arr2[], int m , int arr3[]){

    
}