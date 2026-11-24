#include<iostream>
#include"inheritance3.h"
using namespace std;
int main(){
	    derived2 d2(10, 20, 30);
	    derived2 d3 {d2};
d2.print();
cout << endl;
d3.print();

d3.setd2_variable(-12);
d2 = d3;

cout << endl;
d2.print();

return 0;
}

