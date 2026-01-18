#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// LeetCode 169 : Majority Element --->
/*
Example 1:

Input: nums = [3,2,3]
Output: 3

Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n / 2];
    }
};

int main() {
    Solution solution;

    vector<int> nums = {2,2,1,1,1,2,2};

    int result = solution.majorityElement(nums);

    cout << "Majority element: " << result << endl;

    return 0;
}
