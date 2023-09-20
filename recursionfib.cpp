#include <iostream>
using namespace std;

int fib(int n){

    if (n<=1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int n, i=0;

    cout<<"Enter the term of the Series:";
    cin>>n;
    cout<<"Fibonacci Series: ";

     while(i<n){
        cout<< " " <<fib(i);
        i++;

     }
     return 0;
}