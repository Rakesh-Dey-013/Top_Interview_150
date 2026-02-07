#include <bits/stdc++.h>
using namespace std;

// LeetCode 45 : Jump Game II

/* Example 1:

Input: nums = [2,3,1,1,4]
Output: 2
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.
*/

class Solution {
public:
    int jump(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = max(nums[i] + i, nums[i - 1]);
        }

        int ind = 0;
        int ans = 0;

        while (ind < nums.size() - 1) {
            ans++;
            ind = nums[ind];
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {2, 3, 1, 1, 4};

    // Call function
    int result = sol.jump(nums);

    // Output result
    cout << "Minimum jumps: " << result << endl;

    return 0;
}