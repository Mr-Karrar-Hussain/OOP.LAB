#include"inheritance3.h"

base::base(int b)
{
b_variable=b;
}
void base:: print()const{
cout<<"b_variable: "<<b_variable<<endl;
}
void base::setb_variable(int a){
    b_variable=a;
}
int base::getb_variable()const{
    return b_variable;
}
 base::base(const base & rhs){
    b_variable=rhs.b_variable;
 }
  base& base::operator=(const base & rhs)
  {if(this!=&rhs){
    b_variable=rhs.b_variable;
  }
  return *this;
}
  base::~base()
  {
  cout<<"base destructor "<<endl;
  }
  derived1::derived1(int a,int b):base(a){
    d1_variable=b;
  }
  void derived1::print()const{
    base::print();
    cout<<"d1_variable: "<<d1_variable<<endl;
  }
  void derived1::setd1_variable(int a ){
    
    d1_variable=a;
}
int derived1::getd1_variable()const{
    return d1_variable;
}
derived1::derived1(const derived1 & rhs):base(rhs){
    d1_variable=rhs.d1_variable;
 }
  derived1& derived1::operator=(const derived1 & rhs)
  {if(this!=&rhs){
    base::operator=(rhs);
    d1_variable=rhs.d1_variable;
  }
  return *this;
}
derived1::~derived1()
{
    cout<<"derived1 destructor"<<endl;
}
derived2::derived2(int a,int b,int c):derived1(a,b){
    d2_variable=c;
}
void derived2::print()const{
    derived1::print();
    cout<<"d2_variable: "<<d2_variable<<endl;
}
void derived2::setd2_variable(int a){
    
    d2_variable=a;
}
int derived2::getd2_variable()const{
    return d2_variable;
}
derived2::derived2(const derived2 & rhs):derived1(rhs){
    d2_variable=rhs.d2_variable;
 }
  derived2& derived2::operator=(const derived2 & rhs)
  {if(this!=&rhs){
    derived1::operator=(rhs);
    d2_variable=rhs.d2_variable;
  }
  return *this;
}
derived2::~derived2()
{
    cout<<"derived2 destructor"<<endl;
}