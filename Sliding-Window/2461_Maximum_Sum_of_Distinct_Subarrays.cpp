Commit 0c3c2f3
NANDANI2006
NANDANI2006
authored
9 minutes ago
Verified
Create 2461_Maximum_Sum_of_Distinct_Subarrays.cpp
main
1 parent 
e9fda6c
 commit 
0c3c2f3
1 file changed

+1
Lines changed: 1 addition & 0 deletions
Search within code
 
‎Sliding-Window/2461_Maximum_Sum_of_Distinct_Subarrays.cpp‎
+1
Lines changed: 1 addition & 0 deletions
Original file line number	Diff line number	Diff line change
@@ -0,0 +1 @@
NANDANI2006 commented 1 minute ago
@NANDANI2006
NANDANI2006
1m ago
Owner
Author
#include
#include
#include <unordered_set>
#include
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

Write a reply
0 commit comments
Comments
0
 (0)
Comment
You're not receiving notifications from this thre
