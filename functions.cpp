#include<iostream>
using namespace std;


int power(int a , int b){
int ans =1;
for (int i = 1 ; i<=b ; i++){
    ans = ans*a;
}
return ans;

}

int update(int a ){
    a-=5;
    return a ;
}


int nthfibonacci(int n){
    int a = 0;
    int b = 1;
    int sum;
    cout<<"enter number ";
    cin>>n;


    for(int i = 2 ; i<n ; i++){
        sum = a+b;
        a = b;
        b = sum;
    
    }
    return sum;

}


int setbits(int a , int b ){
    cout<<"Enter a ";
    cin>>a;
    cout<<"Enter b ";
    cin>>b;
    int count = 0;
    int bit;
    while(a!=0){
        bit = a&1;
        if(bit==1){
            count+=1;
        }
        a = a>>1;
        
    }
    while(b!=0){
        bit = b&1;
        if(bit==1){
            count+=1;
        }
        b =  b>>1;
        
    }

    return count;

}





int main(){
 /*int a , b;
 cin>>a >>b;


int ans = power(a,b);
   cout<<ans;
  return 0;

 int a =   5;
 a = update(a);
 cout<<a<<endl;*/



//notes in amount 
/*
int amount;
cout<<"Enter Amount"<<endl;
cin>>amount;

int n100,n50,n20,n10,n1;
n100=n50=n20=n10=n1=0;

while(amount!=0){
if(amount>=100){
     n100 = amount/100;
     amount-=n100*100;
}

else if(amount>=50){
     n50 = amount/50;
     amount-=n50*50;
}
else if(amount>=20){
     n20 = amount/20;
     amount-=n20*20;
}
else if(amount>=10){
     n10 = amount/10;
     amount-=n10*10;
}
else if(amount>=1){
     n1 = amount/1;
     amount-=n1*1;
}
}

cout<<"No of 100Rs notes = "<<n100<<endl;
cout<<"No of 50Rs notes = "<<n50<<endl;
cout<<"No of 20Rs notes = "<<n20<<endl;
cout<<"No of 10Rs notes = "<<n10<<endl;
cout<<"No of 1Rs notes = "<<n1<<endl;

*/
/*
int a;
cout<<nthfibonacci(a)<<endl;*/

int a,b;
cout<<"Total no of set bits in a & b are "<<setbits(a,b);




}