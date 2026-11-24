#include<iostream>
using namespace std;
#include"inheritance1.h"
base::base():b_vriablel{0}{
    cout<<"base d-constructor \n";
}
base::~base(){
    cout<<"base destructor\n";
}
derived1::derived1():d1_variable{0},base(){

    cout<<"derived1 constructor \n";
}
derived1::~derived1(){
    cout<<"derived1 deatructor \n";
}
derived2::derived2():d2_variable{0},derived1(){
    derived1();
    cout<<"derived2 consturctor \n";
}
derived2::~derived2(){
    
    cout<<"derived2 destructor \n";
}