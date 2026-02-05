#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// LeetCode 55 : Jump Game
/* Example 1:

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
*/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i > maxReach) return false;
            maxReach = max(maxReach, i + nums[i]);
            if (maxReach >= n - 1) return true;
        }
        return true;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2, 3, 1, 1, 4}; // test case
    cout << (sol.canJump(nums) ? "true" : "false") << endl;

    return 0;
}