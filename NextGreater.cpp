#include <bits/stdc++.h>
using namespace std;

void nextt(int n, int arr[]){
    int next;

    for(int i=0; i<n; i++){
        next=arr[i];
        for(int j=i+1; j<n; j++){
            if(next<arr[j]){
                next=arr[j];
            }
        }
        if(next==arr[i]){
           cout<<arr[i]<<"->"<<-1<<endl;
        }
        else{
            cout<<arr[i]<<"->"<<next<<endl;
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

    nextt(n,arr);


    return 0;
}