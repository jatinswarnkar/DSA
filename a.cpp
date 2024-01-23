#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   /* char alphabet = 68;   
    cout<<alphabet<<endl;

    cout<<"namaste"<<endl;
    int integer1 = 'a';
    cout<<integer1<<endl;
    */

/*

   //variable snd scope
    int a ;
    cout<<a<<endl;//output koi bhi number aa jayega

    if(true){
        int a = 5;
        cout<<a<<endl;
    }
    cout<<a<<endl;*/

//binary to decimal
/*    
int n ;
cin>>n; 
int i = 0,ans = 0;
while (n!= 0){
    int digit = n % 10;
    if(digit==1){
        ans = ans + pow(2,i);
    }
    n = n/10;
    i++;
}
cout<<ans<<endl;
*/
//decimal to binary
 int k; 
    cin>>k; 
    int ans = 0; 
    int i = 0;
    while(k!=0){
        int bit = k&1;
        ans = ans + (bit * round(pow(10, i)));//we include round when we use integer in pow function        k = k >> 1;
        i++;
        
     } 
    cout<<ans<<endl;

}