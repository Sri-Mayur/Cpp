#include <bits/stdc++.h>
using namespace std;

void func(int n, int k, int arr[]){

    int first= -1;
    int last= -1;

    for(int i=0; i<n ; i++){
        if(arr[i]==k){
            if(first==-1){
                first=i;
            }
            last=i;
        }
    }

    cout<<first<<" "<<last;

}

int main(){

    int n;
    int k;

    cin>>n;
    
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cin>>k;

    func(n,k,arr);

    return 0;
}

/*
Test Cases:

Input:
4
0 1 1 5
1
Output:
1 2

Input:
8
0 0 1 1 2 2 2 2
2
Output:
4 7

Input:
4
1 3 3 5
2
Output:
-1 -1

Input:
10
1 1 1 1 1 1 1 1 1 1
1
Output:
0 9

Input:
5
9 7 1 8 8 
7
Output:
1 1

Input:
0

1
Output:
-1 -1

Input:
2
9 9
9
Output:
0 1

Input:
1
6
6
Output:
0 0




*/