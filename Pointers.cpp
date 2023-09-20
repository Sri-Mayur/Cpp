#include <iostream>
using namespace std;

int main() {

    int a=10;
    int *p;
    p=&a;

    cout<<"*p= "<<*p<<endl; //It will print 10.

    int **q=&p; //Pointer of a pointer.

    cout<<"*q= "<<*q<<endl; //It will print address of p
    cout<<"**q= "<<**q<<endl; //It will print value contained in p.

    return 0;
}