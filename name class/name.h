#ifndef NAME_H
#define NAME_H

#include <iostream>
using namespace std;

class Name
{
    char* firstName;
    char middleInitial;
    char* lastName;

    int length(const char* str);
    void dynamicCopy(char*& dest, const char* src);

public:
    Name();
    Name(const char* first, char middle, const char* last);
    Name(const Name& other);
    Name& operator=(const Name& other);
    ~Name();

    friend ostream& operator<<(ostream& out, const Name& obj);
    friend istream& operator>>(istream& in, Name& obj);
    friend bool operator==(const Name& n1, const Name& n2);
};

#endif