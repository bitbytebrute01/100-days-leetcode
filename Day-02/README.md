# LeetCode Problem 9: Palindrome Number

## 🔗 Problem Link
[LeetCode - 9. Palindrome Number](https://leetcode.com/problems/palindrome-number/)

## 📄 Problem Statement

Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

An integer is a **palindrome** when it reads the same backward as forward.

### Example:

Input: x = 121
Output: true

Input: x = -121
Output: false

## 🧠 Approach

- We reverse **half** of the digits of the number.
- If the reversed half equals the remaining half, it's a palindrome.
- This avoids unnecessary memory and handles integer overflow.

### Time Complexity:
- `O(log10(n))` – because we divide the number by 10 each iteration.

### Space Complexity:
- `O(1)` – constant space usage.

## 🚀 Solution (C++)

See [`main.cpp`](./main.cpp) for full implementation.

```cpp
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
