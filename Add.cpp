#include <iostream>
using namespace std;

void add(int a, int b){
    cout<< a+b;
}

int main() {
    int a, b, sum=0;

    cout<<"Enter two numbers:";
    cin>>a>>b;
    add(a,b);
}