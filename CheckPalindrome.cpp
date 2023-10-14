#include <bits/stdc++.h>
using namespace std;

void palindrome(string s){

    int a=0, z= s.length()-1;

    
        while(z>a){
            if(s[a]!=s[z]){
                cout<< "Not Palindrome";
                return;
            }
            a++;
            z--;
        }

        cout<< "Palindrome";
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;

    palindrome(s);

    return 0;
}