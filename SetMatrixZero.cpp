#include <iostream>
using namespace std;

void input(int n, int m, int a[100][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

void solve(int n, int m) {
    int a[100][100];  // Declare the matrix locally
    
    // Read the input into the local matrix 'a'
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Create two arrays to keep track of rows and columns that should be zeroed out.
    bool rowZero[n], colZero[m];

    // Initialize rowZero and colZero arrays to false.
    for (int i = 0; i < n; i++) {
        rowZero[i] = false;
    }
    for (int j = 0; j < m; j++) {
        colZero[j] = false;
    }

    // Find rows and columns to zero out
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                rowZero[i] = true;
                colZero[j] = true;
            }
        }
    }

    // Zero out rows
    for (int i = 0; i < n; i++) {
        if (rowZero[i]) {
            for (int j = 0; j < m; j++) {
                a[i][j] = 0;
            }
        }
    }

    // Zero out columns
    for (int j = 0; j < m; j++) {
        if (colZero[j]) {
            for (int i = 0; i < n; i++) {
                a[i][j] = 0;
            }
        }
    }

    // Output the modified matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m, t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        input(n, m);
        solve(n, m);
    }

    return 0;
}
