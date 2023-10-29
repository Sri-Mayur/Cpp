#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false; 
        }

        int original = x;
        int reversed = 0;

        while (x != 0) {
            int remainder = x % 10;
            reversed = reversed * 10 + remainder;
            x = x / 10;
        }

        return original == reversed;
    }
};

int main() {
    int x;
    cin >> x;

    Solution solution; 
    bool result = solution.isPalindrome(x);

    if (result) {
        cout<<"True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
