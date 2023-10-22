#include <bits/stdc++.h>
using namespace std;

void power(int n, int arr[]){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }

}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    power(n,arr);


    return 0;
}