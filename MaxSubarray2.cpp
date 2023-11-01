#include <bits/stdc++.h>
using namespace std;


void Subarray(int nums[], int n) {

       int currentsum=0;
        int maxsum= INT_MIN;

        for(int i=0; i<n; i++){
            currentsum+=nums[i];

            if(currentsum>maxsum){
                maxsum=currentsum;
            }

            if(currentsum<0){
                currentsum=0;
            }
        }

        cout<<maxsum;

    }

    
    int main(){
        int n;
        cin>>n;

        int nums[n];
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        if(n==0){
        cout<<"0";
        }
        else{
            Subarray(nums,n);
        }
        

        return 0;
    }
