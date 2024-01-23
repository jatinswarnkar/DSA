#include<iostream>
using namespace std;


int BinarySearch(int arr[],int size , int key){
    int start = 0 ;
    int end =size-1;

    int mid = start+(end-start)/2;

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        //go to right
        if (key>arr[mid]){
            start = mid+1;
        }

        else{
          end = mid-1;  
        }

        mid = start+(end-start)/2;

    } 
    return -1;
}


int firstOccurance(int arr[],int size , int key){
   int start = 0 ;
    int end =size-1;
    int mid = start+(end-start)/2;
    int ans = -1;
    while(start<=end){

        if(arr[mid]==key){
            ans = mid;
            end = mid-1 ;
        }
        //go to right
        if (key>arr[mid]){
            start = mid+1;
        }

        else if(key<arr[mid]){
          end = mid-1;  
        }

        mid = start+(end-start)/2;

    } 
    return ans;

}

int lastOccurance(int arr[],int size , int key){
   int start = 0 ;
    int end =size-1;
    int mid = start+(end-start)/2;
    int ans = -1;
    while(start<=end){

        if(arr[mid]==key){
            ans = mid;
            start= mid+1 ;
        }
        //go to right
        if (key>arr[mid]){
            start = mid+1;
        }

        else if(key<arr[mid]){
          end = mid-1;  
        }

        mid = start+(end-start)/2;

    } 
    return ans;

}

int peakIndexInMountainArray(int arr[],int n) {

        int s = 0; 
        int e = n-1;
        int mid = s+(e-s)/2;

        while(s<e){

            if(arr[mid]<arr[mid+1]){
                s = mid+1;
            }
            else{
                e=mid;
            }
        mid = s+(e-s)/2;

        }
        return s;
    }

int pivotinarray(int arr[],int n) {

        int s = 0; 
        int e = n-1;
        int mid = s+(e-s)/2;

        while(s<e){

            if(arr[mid]>=arr[0]){
                s = mid+1;
            }
            else{
                e=mid;
            }
        mid = s+(e-s)/2;

        }
        return s;
    }

int main(){

     int even[5] = {7,9,2,3,4}; 

     int index = pivotinarray(even,5);

    cout<<"pivot is at "<<even[index]<<endl;  


}