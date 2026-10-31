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


