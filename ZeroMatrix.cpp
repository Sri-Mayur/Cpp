#include <iostream>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int>& a, int n, int k) {
    
    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    return make_pair(first, last);
}


int main() {

    int n,m,a[100][100], t;

    cout<<"Enter the test cases:";
    cin>>t;

    for(int i=0; i<t; i++){
        cout<<"Enter the row and column of Test Case"<<i+1<<":";
        cin>>n>>m;
        for(int i=0; i<n;i++){
            for(int j=0; j<m;j++){
                cout<<"a"<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<":";
                cin>>a[i][j];
            }
        }

    }
    firstAndLastPosition(vector<int>& arr, int n, int k)

}