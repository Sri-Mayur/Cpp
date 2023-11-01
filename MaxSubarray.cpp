#include <bits/stdc++.h>
using namespace std;


void Subarray(int nums[], int n) {

        int sum[n]={0};
        int result=0;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                sum[i]+=nums[j];
            }
        }
        for(int i=0; i<n; i++){

            if(sum[i]>result){
                result=sum[i];
            }
        }

        cout<<result;
    }

    
    int main(){
        int n;
        cin>>n;

        int nums[n];
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        Subarray(nums,n);

        return 0;
    }
