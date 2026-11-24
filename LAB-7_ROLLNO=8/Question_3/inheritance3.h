#ifndef base_h
#define base_h
#include<iostream>
using namespace std;
class base
{
    private:
    int b_variable{};
    public:
    base(int b=0);
    base(const base &);
    base& operator=(const base &);
    void setb_variable(int );
    int getb_variable()const;
    void print()const;
      ~base();
};
class derived1:public base
{
    private:
    int d1_variable{};
    public:
    derived1(int ,int);
     derived1(const derived1 &);
    derived1& operator=(const derived1 &);
    void setd1_variable(int);
    int getd1_variable()const;
    void print()const;
    ~derived1();
};
class derived2:public derived1
{
    private:
    int d2_variable{};
    public:
    derived2(int ,int,int);
     derived2(const derived2 &);
    derived2& operator=(const derived2 &);
    void setd2_variable(int );
    int getd2_variable()const;
    void print()const;
    ~derived2();
};
#endif