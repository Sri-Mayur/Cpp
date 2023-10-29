#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void chair(int n, int a[]){
    
    int unique =-1;
    
    sort(a,a+n);
    
    for(int i=0; i<n-1; i++){
        if(a[i]==a[i+1]){
            a[i]=a[i+1]=-1;
        }
        
    }
    
    for(int i=0; i<n; i++){
        
        if(a[i]!=-1){
            unique=a[i];
            
        }
        
    }
    
    cout<<unique;

}

int main(){
    int n;
    cin>>n;
    
    int a[100];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    chair(n,a);
    
    return 0;
}