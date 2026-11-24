#include"inheritance2.h"
base::base(int b):b_variable(b){
    cout<<"base constructor \n";
}
base::~base(){
    cout<<"destructor base \n";
}
void base::print()const{
      cout<<b_variable<<endl;
      }

derived1::derived1(int a,int b):base( a){
     d1_variable1=b;
}

void derived1::print()const{
    base::print();
      cout<<d1_variable1<<endl;
      }
derived1::~derived1(){
    base::~base();
    cout<<"Derived1 destructor \n";
}
    derived2::derived2(int a ,int b,int c):derived1(a,b){
         d2_variable1=c; 
    }
       void derived2::print()const{
      derived1::print();
       cout<<d2_variable1<<endl;
      }
        derived2::~derived2(){
            derived1::~derived1();
        cout<<"Derived2 destructor \n";
    }
    