#include <bits/stdc++.h>
using namespace std;

void decimal(int n){

    int ans=0, i=0;

    while(n!=0){

        if(n%10 == 1){
            ans = ans + pow(2,i);
        }
        i++;
        n=n/10;
    }

    cout<<ans;

}

int main(){
    int n; 

    cout<<"Enter the binary number:";
    cin>>n;

    decimal(n);

    return 0;
}