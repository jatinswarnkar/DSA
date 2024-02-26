#include<iostream>
using namespace std;

//selection sort select min of array and place at 1st positon

int main(){
int n = 5;
int arr[n] = {11,9,6,5,2};

/*for(int i = 0 ; i<n-1 ; i++){
    int minIndex=i;
    for(int j = i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
            minIndex=j;
            }
    }
  swap(arr[minIndex],arr[i]);
}

for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;


//Bubble sort (compare adjancent elements)
for(int i = 1 ; i<n ; i++){

    bool swapped = false;

    for(int j = 0;j<n-i;j++){

        if(arr[j]>arr[j+1]){

              swap(arr[j+1],arr[j]);
              swapped = true;

            }
    }
    if(swapped==false){
        break;
    }

}

for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}*/

//insertion sort 
for(int i = 1; i<n ;i++){

    int temp = arr[i];
    int j ;

    for( j = i-1 ; j>=0;j--){

      if(arr[j]>temp){
        //shift
        arr[j+1] = arr[j];
         
      }

      else{

        break;
      }

    }
   arr[j+1] = temp;
}

for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}

return 0;

}