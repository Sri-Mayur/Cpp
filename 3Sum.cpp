#include <bits/stdc++.h>

using namespace std;

set<vector<int>> compound(int n, int a[]) {
    if (n < 3) return {};

    set<vector<int>> s;

    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = a[i] + a[left] + a[right];

            if (sum == 0) {
                s.insert({a[i], a[left], a[right]});
                left++;
                right--;
            } else if (sum > 0) {
                right--;
            } else {
                left++;
            }
        }
    }

    return s;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    set<vector<int>> result = compound(n, a);

    for (const auto &triplet : result) {
        cout << "[";
        for (int i = 0; i < 3; i++) {
            cout << triplet[i];
            if (i < 2) cout << ",";
        }
        cout << "]" << endl;
    }

    return 0;
}
