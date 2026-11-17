#include "DArray1.h"
DArray::DArray()
{
    arr = nullptr;
    m_size = 0;
    m_capacity = 0;
}

void DArray::push_back(int num)
{
    if (m_size == m_capacity)
    {
        int newCapacity;

        if (m_capacity == 0)
            newCapacity = 1;
        else
            newCapacity = m_capacity * 2;

        int* temp = new int[newCapacity];

        for (int i = 0; i < m_size; i++)
        {
            temp[i] = arr[i];
        }

        delete[] arr;

        arr = temp;
        m_capacity = newCapacity;
    }

    arr[m_size] = num;
    m_size++;
}

DArray& DArray::operator=(const DArray& rhs)
{
    if (this != &rhs)
    {
        delete[] arr;

        m_size = rhs.m_size;
        m_capacity = rhs.m_capacity;

        arr = (m_capacity == 0) ? nullptr : new int[m_capacity];

        for (int i = 0; i < m_size; i++)
        {
            arr[i] = rhs.arr[i];
        }
    }

    return *this;
}

const int* DArray::get(int& n) const{
    n = m_size;
    return arr;
}

int DArray::size() const{
    return m_size;
}

int DArray::capacity() const
{
    return m_capacity;
}

int& DArray::operator[](int index)
{
    return arr[index];
}

ostream& operator<<(ostream& os, const DArray& obj)
{
    int n;
    const int* p = obj.get(n);

    for (int i = 0; i < n; i++)
    {
        os << p[i] << " ";
    }

    return os;
}

DArray::~DArray()
{
    delete[] arr;
}