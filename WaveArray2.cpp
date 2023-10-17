#include <bits/stdc++.h>
using namespace std;

void wave(int n, int a[]){

    for(int i=0;i<n;i+=2){
        if(i>0 && a[i-1]>a[i]){
            swap(a[i],a[i-1]);
        }

        if(i<n-1 && a[i+1]>a[i]){
            swap(a[i],a[i+1]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }



}
int main(){

    int n, a[100];
    cout<<"Enter the size of array:";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter the elment"<<i+1<<":";
        cin>>a[i];
    }

    wave(n,a);

    return 0;
}