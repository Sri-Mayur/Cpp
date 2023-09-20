#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
    cout<<"In increament function:"<<endl;
    cout<<"a= "<<*a<<endl;
    cout<<"b= "<<*b<<endl;
}

int main() {

    int a, b;

    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;

    swap(&a,&b);
    cout<<"In main function:"<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
}