#include <iostream>
using namespace std;

//Pass by Value

void increament(int a){
    a++;
    cout<<"Value of a in increament function:"<<a<<endl;
}

int main() {
    int a=2;
    cout<<"Value of a before increament function:"<<a<<endl;

    increament(a);
    cout<<"Value of a after increament function:"<<a<<endl;
    return 0;

}