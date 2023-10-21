#include <iostream>  

using namespace std;  

void func(int fishes[], int n) {
    int c = 1;
    int first = fishes[0];

    for (int i = 1; i < n; i++) {
        if (first > fishes[i]) {
            continue;
        } else {
            c++;
            first = fishes[i];
        }
    }

    cout << c << endl;  
}

int main() {
    int n;
    cin >> n;

    int fishes[n];

    for (int i = 0; i < n; i++) {
        cin >> fishes[i];
    }

    func(fishes, n); 
    return 0;
}

/*
Test Cases:

Input:
5
4 2 3 1 5
Ouput:
2

Input:
3
8 1 3
Output:
1

Input:
4
1 2 3 4
Output:
4

Input:
4
4 4 2 4
Output:
3

Input:
1
2
Output:
1

Input:
5
1 2 3 4 5
Output:
5

Input:
5
5 4 3 2 1
Output:
1

Input:
9
1 2 3 9 8 7 3 4 5 
Output:
4




*/
