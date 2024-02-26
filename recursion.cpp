#include<iostream>
using namespace std;

int factorial(int n ){
    if(n==0){
        return 1;
    }

    return n*factorial(n-1);
}

int powerofTwo(int n ){
    if(n==0){
        return 1;
    }

    int smallerproblem = powerofTwo(n-1);
    int biggerprob = 2*smallerproblem;
    
    return biggerprob;
}

void assendcounting(int n ){
    if(n==0){
        return;
    }
    
    //recurance relation
    assendcounting(n-1);

    cout<<n<<endl;
    
    
}

void decendcounting(int n ){
    if(n==0){
        return;
    }
    
   
    
    cout<<n<<endl;

     //recurance relation
    decendcounting(n-1);
    
}

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
   int ans = fibonacci(n-1)+fibonacci(n-2);
    return ans ;
}

void saynum(int n,string arr[]){
    //base case
    if(n==0){
        return;
    }
    int digit = n % 10;
    n = n/10;
    
    saynum(n,arr);

    cout<<arr[digit]<<" ";
}

bool isSorted(int *arr,int n){

    if(n == 0||n == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
       bool ans = isSorted(arr+1,n-1);
       return ans;
    }

}

int arraySum(int arr[], int n){
    if(n<=0){
        return 0 ;
    }
    return (arraySum(arr,n-1)+arr[n-1]);
}

void print(int arr[],int n){

     for(int i = 0 ; i<n;i++){

    cout<<arr[i]<<" ";

 }

}

bool linearSearch(int *arr,int n , int key){

    if(n == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }

    else{
        bool remainingPart = linearSearch(arr+1,n-1,key);
        return remainingPart;
    }


}

bool binarySearch(int arr[] ,int start, int end , int key){

    if(start>end){
        return false;
    }


    int mid = start + (end-start)/2;
    bool remainingPart;

    if(arr[mid] == key){
        return true;
    }
    else if(arr[mid]>key){

       remainingPart = binarySearch(arr,start , mid-1 ,key );
       return remainingPart;
    }
    else{
        remainingPart = binarySearch(arr, mid+1 , end ,key );
        return remainingPart;
    }
}

void reverseString(string &name,int start , int end){
        if(start>end){
            return ;
        }

        swap(name[start],name[end]);
        start++;
        end--;

        reverseString(name,start,end);

}

bool checkPalindrome(string str , int i , int j){

   if(i>j){
    return  true ;
   }

   if(str[i]!=str[j]){
    return false;
   }

   else{
    return checkPalindrome(str,i+1,j-1);
   }

}


int aPowerb(int a , int b){

     if(b==0){
        return 1;
     }

     if(b==1){
        return a;
     }

     int ans = aPowerb(a,b/2);

     if(b%2 == 0){
        return ans*ans;
     }
     else{
        return a*ans*ans;
     }

}


void bubbleSort(int *arr , int n){

    if(n==0 || n==1){
        return ; 
    }

    for(int i = 0 ; i<n-1;i++){
         if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
         }
        }

    bubbleSort(arr,n-1);

}

void merge(int *arr , int s , int e){

   int mid = s + (e-s)/2;

   int len1 = mid-s+1;
   int len2 = e-mid;

   int *first = new int[len1];
   int *second = new int[len2];  

   int mainArrayIndex = s;
   for(int i = 0 ; i<len1;i++){
     first[i] = arr[mainArrayIndex++];
   }

    mainArrayIndex = mid +1 ;
   for(int i = 0 ; i<len2;i++){
     second[i] = arr[mainArrayIndex++];
   }

   //merge 2 sorted arrays 

   int index1 = 0;
   int index2  = 0;
   mainArrayIndex = s;

   while(index1 < len1 && index2 < len2){

       if(first[index1] < second[index2]){
        arr[mainArrayIndex++] = first[index1++];
       }
       else{
        arr[mainArrayIndex++] = second[index2++];
       }
   }
    
    while(index1<len1){
    arr[mainArrayIndex++] = first[index1++];
    }
   
   while(index2<len2){
    arr[mainArrayIndex++] = second[index2++];
   }
  
  delete []first;
  delete []second;

} 

void mergeSort(int *arr , int s , int e){

    if(s>=e){
        return;
    }
    int mid = s + (e-s)/2;
    //left part sort krna hai
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);



}

//quick sort

int partition(int arr[], int s , int e){
    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //pivot ki shi jgah 
    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);

    //left and right wala part smbhalenge
    int i = s , j = e;
    while(i<pivotIndex && j>pivotIndex){

        while(arr[i]<=pivot){
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[],int s , int e){

    if (s>=e){
        return;
    }
    int p = partition(arr,s,e);
    //left part sort

    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);
}



int main(){
  
  //int n = 5;
  string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  int a[5] = {1,9,6,3,5};
   int key = 5;
   string name = "DSA";
   //bool ans = isSorted(a,n);
  //cout<<fibonacci(6)<<endl;
  //if(ans){
   // cout<<"Sorted"<<endl;
  //}
 // else{
  //  cout<<"Not Sorted"<<endl;
  //}

  //bool ans = binarySearch(a,0,n-1,key);
  //cout<<fibonacci(6)<<endl;
  //if(ans){
  //  cout<<"key found"<<endl;
  //}
  //else{
  //  cout<<"key not found"<<endl;
  //}
  
  //saynum(n,arr);
  //assendcounting(5);
  //decendcounting(5);

 // reverseString(name,0,name.length()-1);
  //cout<<binary(10)<<endl;

 // string temp = (checkPalindrome(name,0,name.length()-1)) ? "palindrome":"not palindrome";

 // cout<<aPowerb(2,4);

// bubbleSort(a,5);
//quickSort(a,0,n-1);

//print(a,n);

 
    return 0;
}