#include <iostream>
using namespace std;


void printname(string name){
    cout<<"Hey! " <<name;

}

void greet(string name){

    cout<<endl<<"Greeting of the day "<<name;

}

int main(){

string name;
    cout<<"Enter your name:";
    cin>>name;
    printname(name);
    greet(name);
}

