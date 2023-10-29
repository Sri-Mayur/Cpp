#include <bits/stdc++.h>
using namespace std;

void hashing(int n, int a[]){

  int temp[100]={0};

  for(int i=0; i<n; i++){
    temp[a[i]]+=1;

  }

  for(int i=0; i<n; i++){
    if(temp[i]!=0){
      cout<<i<<"->"<<temp[i]<<endl;
    }
  }

}

int main(){
  int n;
  cin>>n;

  int a[n];

  for(int i=0; i<n; i++){
    cin>>a[i];
  }

  hashing(n, a);

  return 0;
}