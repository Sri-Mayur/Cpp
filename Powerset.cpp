#include <bits/stdc++.h>
using namespace std;

void power(int n, char a[]){

    int size= pow(2,n);

    for(int i=0; i<size; i++){
        for(int j=0; j<n; j++){
            
            if(i & (1<<j))
            cout<<a[j];
        }
        cout<<" ";

    }


}

int main(){
    int n;

    cin>>n;
    char a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    power(n,a);

    return 0;
}