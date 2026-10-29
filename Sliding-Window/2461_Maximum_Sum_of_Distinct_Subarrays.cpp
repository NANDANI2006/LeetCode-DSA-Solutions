
#include<iostream>
#include<vector>
#include <unordered_set>
#include<algorithm>
using namespace std;

class Solution {
public:
long long maximumSubarraySum(vector& nums, int k) {
int n = nums.size();

    unordered_set<int> st;
    long long sum = 0;
    long long ans = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {

        // Remove duplicate elements from the window
        while (st.count(nums[right])) {
            st.erase(nums[left]);
            sum -= nums[left];
            left++;
        }

        // Add the current element
        st.insert(nums[right]);
        sum += nums[right];

        // Keep the window size at most k
        if (right - left + 1 > k) {
            st.erase(nums[left]);
            sum -= nums[left];
            left++;
        }

        // Update maximum sum for a valid window
        if (right - left + 1 == k) {
            ans = max(ans, sum);
        }
    }

    return ans;
}
};

int main() {
Solution solution;

vector<int> nums = {1, 5, 4, 2, 9, 9, 9};
int k = 3;

long long result = solution.maximumSubarraySum(nums, k);

cout << "Maximum sum: " << result << endl;

return 0;
}


