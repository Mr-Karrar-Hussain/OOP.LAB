#ifndef base_h
#define base_h
#include<iostream>
using namespace std;
class base
{
    private:
    int b_vriablel{};
    public:
    base();
    ~base();
};
class derived1: public base
{
    private:
    int d1_variable{};
    public:
    derived1();
    ~derived1();
};
class derived2: public derived1
{
    private:
    int d2_variable{};
    public:
    derived2();
    ~derived2();
};
#endif
