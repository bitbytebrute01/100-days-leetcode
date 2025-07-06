#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        return (x == reversedHalf || x == reversedHalf / 10);
    }
};

int main() {
    Solution sol;
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << (sol.isPalindrome(x) ? "True" : "False") << endl;
    return 0;
}
