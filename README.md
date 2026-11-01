# LeetCode-DSA-Solutions
My LeetCode solutions in C++,  with DSA concepts, approaches,  and complexity analysis.

# LeetCode 2461: Maximum Sum of Distinct Subarrays With Length K

## Problem
Given an integer array `nums` and an integer `k`, find the maximum sum of a contiguous subarray of length `k` containing only distinct elements. Return `0` if no valid subarray exists.

## Approach
I solved this problem using the **Sliding Window** technique and an `unordered_set`.

- Use two pointers, `left` and `right`, to maintain the current window.
- Use an `unordered_set` to track distinct elements.
- Remove elements from the left whenever a duplicate is encountered.
- Maintain the running sum while expanding or shrinking the window.
- Update the maximum sum whenever the window contains exactly `k` distinct elements.

## Example
**Input:** `nums = [1,5,4,2,9,9,9], k = 3`

**Output:** `15`

**Explanation:** The subarray `[4,2,9]` contains three distinct elements and has the maximum sum of `15`.

## Complexity Analysis
- **Time Complexity:** `O(n)` average
- **Space Complexity:** `O(k)`

## Concepts Used
- Sliding Window
- Two Pointers
- Hashing with `unordered_set`
- Running Sum

## Language
C++


### LeetCode 1004 – Max Consecutive Ones III

**Topic:** Sliding Window | Two Pointers

**Approach:**

I solved this problem using the Sliding Window technique.

1. Initialize two pointers, `left` and `right`, to maintain a window.
2. Count the number of zeros inside the current window.
3. Expand the window by moving `right`.
4. If the number of zeros becomes greater than `k`, shrink the window by moving `left` until the zero count is valid.
5. Update the maximum window length at every step.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

**Key Learning:** Learned how to use the Sliding Window technique to find the longest valid subarray while maintaining a constraint.


## 1493. Longest Subarray of 1's After Deleting One Element

**Difficulty:** Medium

**Topic:** Sliding Window, Two Pointers

**Language:** C++

### Problem Description
Given a binary array `nums`, you must delete exactly one element from it.

Return the size of the longest non-empty subarray containing only `1`s in the resulting array.

### Approach: Sliding Window

We use the Sliding Window technique to find the longest subarray containing at most one zero.

- Maintain two pointers: `l` (left) and `i` (right).
- Count the number of zeros in the current window using `z`.
- Expand the window by moving the right pointer.
- If the window contains more than one zero, shrink it from the left until only one zero remains.
- Calculate the answer using `i - l` because exactly one element must be deleted.
- Update the maximum length at each step.

### C++ Solution

[View Solution – 1493_Longest_Subarray_of_1s_After_Deleting_One_Element.cpp](1493_Longest_Subarray_of_1s_After_Deleting_One_Element.cpp)

### Complexity Analysis

- **Time Complexity:** O(n) – Each element is visited at most twice.
- **Space Complexity:** O(1) – Only a constant amount of extra space is used.

### Key Learning

Sliding Window helps efficiently find the longest valid subarray without using nested loops.

**Important:** We use `i - l` instead of `i - l + 1` because exactly one element must be deleted.


