#include <bits/stdc++.h>
using namespace std;

int largest(int n, int nums[], int k){
    priority_queue <int>pq;
    int b=0;

    for(int i=0; i<k; i++){
        b=nums[i]*(-1);
        pq.push(b);
    }

    for(int i=k; i<n; i++){
        if(pq.top()<nums[i]){
            pq.pop();
            pq.push(nums[i]);
        }
    }

    return pq.top();
}

int main(){
    int n,k;
    cin>>n;
    int nums[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    cin>>k;
    cout<< largest(n,nums,k);

    return 0;
}