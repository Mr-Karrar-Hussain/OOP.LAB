#ifndef DArray_H
#define DArray_H
#include <iostream>
using namespace std;
class DArray
{
private:
    int *arr{};
    int size1{};
    int capacity1{};
public:
    DArray();
    void push_back(int);
    DArray& operator+=(const DArray&);
    const int* get(int&) const;
    int size() const;
    int capacity() const;
    int& operator[](int);
    friend ostream& operator<<(ostream&, const DArray&);
    ~DArray();
};
#endif
