# Day 1: Two Sum

## 🔗 Problem Link
[Two Sum – LeetCode](https://leetcode.com/problems/two-sum/)

## 🧠 Approach
Brute-force approach using nested loops. No hash map used.

## 📂 Solution

```cpp
// Your actual code pasted here
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

