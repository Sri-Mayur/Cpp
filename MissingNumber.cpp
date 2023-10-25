#include <bits/stdc++.h>
using namespace std;

void missing(int n, int v[]){

    int i;
    int temp[n+1]={0};

    for(int i=0; i<n; i++){
        temp[v[i]-1]=1;
    }

    for(int i=0; i<n; i++){
        if(temp[i]==0){
            cout<<i+1;
        }
    }

}

int main(){
    int v[100];
    int n;
    cin>>n;


    for (int i=0; i<n; i++){

        cin>>v[i];

    }

    missing(n,v);



    return 0;
}