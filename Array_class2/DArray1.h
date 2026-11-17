#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

class DArray
{
private:
    int *arr{};
    int m_size{};
    int m_capacity{};

public:
    DArray();

    void push_back(int);

    DArray& operator=(const DArray&);

    const int* get(int&) const;

    int size() const;

    int capacity() const;

    int& operator[](int);

    ~DArray();
};

ostream& operator<<(ostream&, const DArray&);

#endif
