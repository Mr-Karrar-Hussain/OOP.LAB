#ifndef base_h
#define base_h
#include<iostream>
using namespace std;
class base
{
    private:
    int b_variable{};
    public:
    base(int);
    ~base();
    void print() const;
};
class derived1: public base
{
    private:
    int d1_variable1{};
    public:
    derived1(int ,int);
    ~derived1();
    void print ()const;
};
class derived2: public derived1
{
    private:
    int d2_variable1{};
    public:
  
    derived2(int ,int ,int);
    ~derived2();
    void print()const;
};
#endif