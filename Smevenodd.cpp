#include<iostream>
using namespace std;

int main() {
	int n,i=0,rem=0, even=0, odd=0;

    cout<<"Enter the number:";
    cin>>n;


    while(n>0){

        rem=n%10;
        if(n%2==0){
            even=even+rem;
        }
        else{
            odd=odd+rem;
        }
        n=n/10;
    }

    cout<<"Even Sum: "<<even<<endl;
    cout<<"Odd Sum: "<<odd;
	
	
}
