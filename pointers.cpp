#include<iostream>
using namespace std;

void print(int *p){
  cout<<*p<<endl;
}

void update(int *p){

   //p = p+1;
   //cout<<"inside "<<p << endl;
   *p = *p + 1;
}

void update2(int **p2){

   //p2 = p2+1;
   //kuch change hoga - no
   //*p2 = *p2+1;
   //kuch change hoga - Yes p ki value update hogi 
   **p2 = **p2 + 1;
    //kuch change hoga - yes i ki value update hogi 

}

int getSum(int *arr,int n){
 
 cout<<endl<<"Size: "<<sizeof(arr)<<endl; 

 int sum = 0;
 for(int i = 0 ; i<n;i++){
  sum+=arr[i];
 }
return sum;

}

int main(){
 /* double num = 5.2;
  cout<<"adress of num "<<&num<<endl;
   
   double *ptr = &num;
   cout<<"Adress is :"<<ptr<<endl;
   cout<<"value is :"<<*ptr<<endl;

   double *p = 0;
   p = &num;
   (*p)++;
  
    cout<<"Adress is :"<<p<<endl;
   cout<<"value is :"<<*p<<endl;

   cout<<"size of integer is "<<sizeof(num)<<endl;
   
   cout<<"size of pointer is "<<sizeof(p)<<endl;
   
   //coping a pointer
   double *q = p;

   //important concept
   int i = 2;
   int*t = &i;
   *t = *t+1;
   cout<<*t<<endl;
   cout<<"before t "<< t << endl;
   t = t+1;
   cout<<"after t "<< t << endl;
  
*/


int arr[10] = {23,122,41,67};

/*cout<<"address of first memory block is "<<arr<<endl;
cout<<"address of first memory block is "<<&arr[0]<<endl;
cout<<"4th "<<*arr<<endl;
cout<<"5th "<<*arr+1<<endl;
cout<<"6th "<<*(arr+1)<<endl;
cout<<"7th "<<*(arr)+1<<endl;
cout<<"8th "<<*(arr+2)<<endl;
cout<<"9th "<<arr[2]<<endl;

//tricky mcq 
int i = 3;
cout<<i[arr]<<endl;


int temp[10];
cout<<sizeof(temp)<<endl;
cout<<"1st "<<sizeof(*temp)<<endl;
cout<<"2nd "<<sizeof(&temp)<<endl;




int *ptr = &temp[0];
cout<<sizeof(ptr)<<endl;
cout<<sizeof(*ptr)<<endl;
cout<<sizeof(&ptr)<<endl;


cout<<&arr[0]<<endl;
cout<<&arr<<endl;
cout<<arr<<endl;

int *p = &arr[0];
cout<<p<<endl;
cout<<*p<<endl;
cout<<"-> "<<&p<<endl;


//Error  we cannot change content under symbol table
//arr = arr+1;

int *ptr = &arr[0];
cout<<ptr<<endl;
ptr = ptr+1;
cout<<ptr<<endl;



int a[5] = {1,2,3,4,5};
char ch[6] = "abcde" ;

//cout is differently implemented in int and ch
cout << arr << endl;
cout << ch << endl;

char *c = &ch[0];
//prints entire string 
cout<<c<<endl;

char temp = 'g';
char *p = &temp;

cout<<p<<endl;




int value = 5;
int *p = &value;

//print(p);

//cout<<"Before "<<*p<<endl;
//update(p);
//cout<<"after "<<*p<<endl;



int array[5] = {1,2,3,4,5};

cout<<"Sum is "<< getSum(array,5)<<endl;
cout<<"Sum is "<< getSum(array+2,3)<<endl;

*/

//Double Pointers
int i  = 5;
int* p = &i;
int** p2 = &p;

cout<<"printing p"<<p<<endl;
cout<<"address of p"<<&p<<endl;
cout<<*p2<<endl;

//value of i in all three manner

cout<<i<<endl;
cout<<*p<<endl;
cout<<**p2<<endl;

//value of p in all three manner

cout<<&i<<endl;
cout<<p<<endl;
cout<<*p2<<endl;


cout<<"Before "<<i<<endl;
cout<<"Before "<<p<<endl;
cout<<"Before "<<p2<<endl;
update2(p2);
cout<<"after "<<i<<endl;
cout<<"after "<<p<<endl;
cout<<"after "<<p2<<endl;




return 0;



 
}