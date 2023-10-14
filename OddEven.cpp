#include <bits/stdc++.h>
using namespace std;

void odd(int n){
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
}

void even(int n){
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
}


int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    cout<<"Odd Numbers:"<<endl;
    odd(n);

    cout<<"Even Numbers:";
    even(n);

    return 0;
}