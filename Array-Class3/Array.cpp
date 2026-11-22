#include "DArray1.h"
DArray::DArray()
{
    arr = nullptr;
    size1 = 0;
    capacity1 = 0;
}

void DArray::push_back(int num){
    if (size1==capacity1){
        int newCapacity;
        if (capacity1 == 0){
            newCapacity = 1;
        }
        else{
            newCapacity = capacity1 * 2;
        }
        int* temp = new int[newCapacity];
        for (int i = 0; i < size1; i++){
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        capacity1 = newCapacity;
    }
    arr[size1] = num;
    size1++;
}
DArray& DArray::operator+=(const DArray& obj)
{
    int n;
    const int* p = obj.get(n);
    for (int i = 0; i < n; i++){
        push_back(p[i]);
    }
    return *this;
}
const int* DArray::get(int& n) const{
    n = size1;
    return arr;
}
int DArray::size() const{
    return size1;
}
int DArray::capacity() const
{
    return capacity1;
}
int& DArray::operator[](int index)
{
    return arr[index];
}
ostream& operator<<(ostream& os, const DArray& obj)
{
    for (int i = 0; i < obj.size1; i++){
        os <<obj.arr[i] << " ";
    }
    return os;
}
DArray::~DArray()
{
    delete[] arr;
}
