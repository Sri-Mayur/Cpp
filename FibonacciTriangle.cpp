#include <bits/stdc++.h>
using namespace std;

void fib(int n){
    int a=0, b=1;
    int sum=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<a<<" " ;
            sum=a+b;
            a=b;
            b=sum;
        }
        cout<<endl;
    }
}

int main(){

    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    fib(n);

    return 0;
}