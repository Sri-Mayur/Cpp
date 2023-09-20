#include <bits/stdc++.h>
using namespace std;

void fib(int n)
{
    int a[1000];
    a[0] = 0;
    a[1] = 1;

    for (int i = 2; i <= n; i++) {
        a[i] = a[i - 2] + a[i - 1];
    }

    cout << a[n];
}

// Driver code
int main()
{
    int n;
    cin >> n;
    fib(n);
    return 0;
}