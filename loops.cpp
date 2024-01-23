#include<iostream>
using namespace std;

int main(){
    // printing n numbers
    /* 50int n ;
    cin>>n;

    int i = 1;
    while(i<=n){
        cout<<i<<endl;
        i = i+1;
    
    }
 //sum of n integers
    int x ;
    cout<<"enter number ";

    cin>>x;

    int sum = 0;
    int i = 1;
    while(i<=x){
        sum = sum+i;
        i = i+1;
    }
    cout<<sum;
    

//check prime
   int a;
   cout<<"enter number ";
   cin>>a;

    int i = 2;
    while (i<a){
        if(a%i==0)
        {
            cout<<"not prime"<<endl;
        }
        else{
            cout<<"prime"<<endl;
        }
        i = i + 1;     
    } */

    //sum of all even no from 1 to k 
/*
    int k;
    cout<<"Enter a Number ";
    cin>>k;
    int sum = 0;
    int i = 2;
    while (i<=k){
         
        sum = sum + i;
        i = i + 2;
    }
    cout<<sum;
*/

//for loop
/*
int k;
    cout<<"Enter a Number ";
    cin>>k;
    
    cout<<"printing count from 1 to n"<<endl;

    for(int i = 1; i<=k ; i++)
    {
        cout<<i<<endl;
    }

for(int a=0,b= 1, c = 2 ; a>=0 && b<=1 && c<=2 ; a--,b--,c--){
    cout<<a<<" "<<b << c <<endl; 
}*/

//fibonacci series
    /*int k;
    cout<<"Enter a Number ";
    cin>>k;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";

    for(int i = 1; i<=k; i++){
        int nextNumber = a+b;
        cout<<nextNumber<<" ";
        a = b;
        b = nextNumber;
    }
    */
/*
   int k;
    cout<<"Enter a Number ";
    cin>>k;
    bool isprime = 1;

    for(int i = 2 ; i<k ; i++){
        if(k%i == 0){
            isprime = 0;
            break;
        }
    }
    if(isprime==0){
        cout<<"Not a prime";
    }
    else{
        cout<<"is a prime";
    }*/
/*
//use of continue
for (int i = 0 ; i<5 ; i++){
    cout<<"hy"<<endl;
    continue;
    cout<<"hi"<<endl; 
     
}
*/
/*
for(int i = 0; i<=15 ; i+= 2){
    cout<<i<<" ";
    if(i&1){
        continue;
    }
    //i++;
}
*/

for(int i =0; i<5 ; i++ ){
    for(int j=i;j<=5;j++){
        if(i+j == 8){
            break;
        }
        cout<<i<<" "<<j<<endl;
    }
}


}
