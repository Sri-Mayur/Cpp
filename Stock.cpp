#include <bits/stdc++.h>
using namespace std;

int stock(int n, int prices[]){

    int minimum= prices[0];
        int maximum= -1;
        int temp= 0;
        int profit=0;

        for(int i=0; i<n; i++){

            if(prices[i]<minimum){
                minimum=prices[i];
                temp=i;
            }
        }

        cout<<"Temp"<<temp<<endl;

        cout<<"minimum: "<<minimum<<endl;
        

        for(int i=temp; i<n; i++){

            if(prices[i]> maximum)
            maximum=prices[i];

        }

        cout<<"Maximum: "<<maximum<<endl;

        if(maximum!=0){
            profit= maximum-minimum;
        }
        else
        profit=0;

        return profit;
}

int main(){
    int n;
    int prices[100];

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>prices[i];
    }

    int ans = stock(n, prices);

    cout<<ans;

    return 0;
}