#ifndef DArray_H
#define DArray_H
#include<iostream>
using namespace std;
class DArray
{
    private:
    int *arr{};
    int size{};
    int capacity{};
    public:
    DArray();
    void push_back(int);
    DArray& operator=(const DArray &);
    friend ostream & operator<<(ostream & os ,const DArray &);
    ~DArray();
};

#endif