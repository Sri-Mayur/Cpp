#include <bits/stdc++.h>
using namespace std;

void vowel(string a){

    for(int i=0; i< a.length();i++){
        if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u'){

            cout<<a[i];
        }
    }
}

int main(){
    string a;
    cout<<"Enter the word:";
    cin>>a;

    vowel(a);


    return 0;
}