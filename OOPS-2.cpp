#include<iostream>
using namespace std;

//encapsulation
class Student{

  private:
      string name;
      int age;
      int height;
 
  public:
     int getage(){
        return this->age;
     }


};


//inheritance
class Human{
    public:
    int height;
    int weight;
    private:
    int age;

     public:
     int getage(){
        return this->age;
     }

      void getweight(int w){
         this->weight = w;
     }

};

class Male: protected Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping "<<endl;
    }
};



int main(){
  

   Male a;

   //cout<<a.age<<endl;
   cout<<a.weight<<endl;
   a.sleep();

   a.getweight(10);
   cout<<a.weight<<endl;


    return 0;
}