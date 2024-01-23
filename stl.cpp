#include<iostream>
#include<array>
#include<vector>
#include<deque>


using namespace std;


int main(){

 int basic[3] = {2,1,3};

 array<int,4> a = {1,2,3,4};  //static array

 //cout<<a.size() <<" element at given index "<<a.at(2)<<" empty or not "<<a.empty()<<" first element "<<a.front()<<" end element "<<a.back()<<endl;


// vector is dynamic make it capacity double 
 /*vector<int> v;

 vector<int> a(5,1); // {1,1,1,1,1}

 vector<int> last(a); //same as a


 cout<<"capacity "<<v.capacity()<<endl;
 v.push_back(2);

 cout<<"capacity "<<v.capacity()<<endl;
 v.push_back(3);

 cout<<"capacity "<<v.capacity()<<endl;
 v.push_back(4);
cout<<"capacity "<<v.capacity()<<endl;
cout<<"size "<<v.size()<<endl;
cout<<v.at(2)<<v.front()<<v.back()<<endl;

cout<<"before pop"<<endl;
for(int i:v){
    cout<<i<<" ";
}
cout<<endl;

v.pop_back();

cout<<"after pop"<<endl;
for(int i:v){
    cout<<i<<" ";
}
cout<<endl;

cout<<"before clear "<<v.size()<<endl;
v.clear();
cout<<"after clear "<<v.size()<<endl;
 
*/



//Deque or double ended queue //dynamic

deque<int> d;

d.push_back(1);
d.push_front(2);
for(int i:d){
    cout<<i<<" ";
}
//d.pop_front();


cout<<"print first index element "<<d.at(1)<<endl;

d.erase(d.begin(),d.begin()+1);
for(int i:d){
    cout<<i<<" ";
}





}
