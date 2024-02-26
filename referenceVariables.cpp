#include<iostream>
using namespace std;

int update1(int n){
    n++;
}

int update2(int& n){
    n++;
}

//default arguement start = 0 

int getSum(int *arr,int n , int start = 0){
    int sum = 0;
    for(int i = start ; i<n;i++ ){
        sum+=arr[i];
    }
    return sum; 
}

// inline function
inline int getMax(int& a , int& b ){
    return (a>b) ? a : b;
}

int main(){

    //int i = 5;
    //reference var
    /*int& j = i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    
   cout<<i<<endl;//5
   update1(i);
   cout<<i<<endl;//5

   cout<<i<<endl;//5
   update2(i);
   cout<<i<<endl;//6



  // dynamic memory allocation;
  int n;
  cin>>n;
  //variable size array
  int* arr = new int[n];

  for(int i = 0 ; i<n;i++){
    cin>>arr[i];
  }

  int ans = getSum(arr,n);
  cout<<ans<<endl;


// creating a 2d array dynamic
int row;
cin>>row;
int col;
cin>>col;

int** arr = new int*[row];

for(int i =0;i<row;i++){
    arr[i] = new int[col];
}
//creation done 

//taking input

for(int i= 0 ; i<row;i++){
    for(int j = 0 ; j<col;j++){
        cin>>arr[i][j];
    }
}

//taking output 
for(int i= 0 ; i<row;i++){
    for(int j = 0 ; j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

//releasing memory 
for(int i =0;i<row;i++){
    delete [] arr[i];
}

delete []arr;

//jagged array

int row;
cin>>row;

int** arr = new int*[row];

int* col = new int[row];

for(int i = 0 ; i<row;i++){
    cin>>col[i];
  }

for(int i =0;i<row;i++){
    arr[i] = new int[col[i]];
}

//taking input

for(int i= 0 ; i<row;i++){
    for(int j = 0 ; j<col[i];j++){
        cin>>arr[i][j];
    }
}

//taking output 
for(int i= 0 ; i<row;i++){
    for(int j = 0 ; j<col[i];j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}



//macros

#define A 10

//global variable



int a = 1 , b = 2;
int ans = 0 ;
ans = getMax(a,b);
cout<<ans<<endl;
*/






}