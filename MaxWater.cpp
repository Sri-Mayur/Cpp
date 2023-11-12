#include <bits/stdc++.h>
using namespace std;

int maxArea(int height[], int n) {

        int l=0,b=0;
        int area = INT_MIN;
        int left=0;
        int right= n-1;

        while(left<right){
            l=min(height[left],height[right]);
            b=right-left;

            area=max(area,l*b);

            if(height[right]<height[left]){
                right--;
            }else{
                left++;
            }
        }

        return area;

        
    }

int main(){
    int n;
    cin>>n;

    int height[n];

    for(int i=0; i<n; i++){
        cin>>height[i];

    }

    int c=maxArea(height,n);
    cout<<c;

    return 0;
}
