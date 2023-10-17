#include <bits/stdc++.h>
using namespace std;

void wave(int a[], int n){

    sort(a,a+n);

    for(int i=0; i<n; i+=2){
        if(i+1<n){
            swap(a[i],a[i+1]);
        }
        
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[100],n;
    cout<<"Enter the size of array:";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter the Element"<<i+1<<":";
        cin>>a[i];
    }

    wave(a,n);

    return 0;
}
