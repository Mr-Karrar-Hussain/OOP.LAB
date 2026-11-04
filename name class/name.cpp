#include "Name.h"

int Name::length(const char* str)
{
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

void Name::dynamicCopy(char*& dest, const char* src)
{
    int len = length(src);
    dest = new char[len + 1];
    for (int i = 0; i <= len; i++) dest[i] = src[i];
}

Name::Name()
{
    firstName = new char[1]{'\0'};
    middleInitial = ' ';
    lastName = new char[1]{'\0'};
}

Name::Name(const char* first, char middle, const char* last)
{
    dynamicCopy(firstName, first);
    middleInitial = middle;
    dynamicCopy(lastName, last);
}

Name::Name(const Name& other)
{
    dynamicCopy(firstName, other.firstName);
    middleInitial = other.middleInitial;
    dynamicCopy(lastName, other.lastName);
}

Name& Name::operator=(const Name& other)
{
    if (this != &other)
    {
        char* first;
        char* last;

        dynamicCopy(first, other.firstName);
        dynamicCopy(last, other.lastName);

        delete[] firstName;
        delete[] lastName;

        firstName = first;
        lastName = last;
        middleInitial = other.middleInitial;
    }
    return *this;
}

Name::~Name()
{
    delete[] firstName;
    delete[] lastName;
}

ostream& operator<<(ostream& out, const Name& obj)
{
    return out << obj.firstName << " "
               << obj.middleInitial << ". "
               << obj.lastName;
}

istream& operator>>(istream& in, Name& obj)
{
    char first[100], last[100], middle;

    if (in >> first >> middle >> last)
    {
        char* f;
        char* l;

        obj.dynamicCopy(f, first);
        obj.dynamicCopy(l, last);

        delete[] obj.firstName;
        delete[] obj.lastName;

        obj.firstName = f;
        obj.lastName = l;
        obj.middleInitial = middle;
    }
    return in;
}

bool operator==(const Name& n1, const Name& n2)
{
    int i = 0;

    while (n1.firstName[i] == n2.firstName[i] &&
           n1.firstName[i] != '\0') i++;

    if (n1.firstName[i] != n2.firstName[i]) return false;
    if (n1.middleInitial != n2.middleInitial) return false;

    i = 0;
    while (n1.lastName[i] == n2.lastName[i] &&
           n1.lastName[i] != '\0') i++;

    return n1.lastName[i] == n2.lastName[i];
}