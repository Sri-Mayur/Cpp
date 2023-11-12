#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[100];
    int n;

    cin>>n;
    int mid=n/2;

    for(int i=0; i<6; i++){
        cin>>a[i];
    }

    cout<<a[mid];

    return 0;
}