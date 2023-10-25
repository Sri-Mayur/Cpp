#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int minimum = min(i, j);
            minimum = min(minimum, 2 * n - 2 - i);
            minimum = min(minimum, 2 * n - 2 - j);
            cout << n - minimum << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    pattern(n);
    return 0;
}
