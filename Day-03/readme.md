# 🧮 Remove Duplicates from Sorted Array – LeetCode #26

## Problem
Given an integer array `nums` sorted in non-decreasing order, remove duplicates in-place such that each unique element appears only once.

## Constraints
- Do not allocate extra space for another array.
- O(1) extra memory.

## Approach
Used the two-pointer technique to overwrite duplicates while maintaining order.

## Time Complexity
- ⏱ Time: O(n)
- 🧠 Space: O(1)

## Example
```cpp
Input:  [0,0,1,1,2,2,3,4,4,5]
Output: 6
Result: [0,1,2,3,4,5,_,_,_,_]
