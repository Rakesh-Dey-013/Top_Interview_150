#include <bits/stdc++.h>
using namespace std;

// LeetCode 238 : Product of Array Except Self
/*
Input: nums = [1,2,3,4]
Output: [24,12,8,6]
*/

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> answer(n, 1);

        // Left products
        int left = 1;
        for (int i = 0; i < n; i++)
        {
            answer[i] = left;
            left *= nums[i];
        }

        // Right products
        int right = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            answer[i] *= right;
            right *= nums[i];
        }

        return answer;
    }
};

int main()
{
    Solution sol;

    // Input
    vector<int> nums = {1, 2, 3, 4};

    // Function Call
    vector<int> result = sol.productExceptSelf(nums);

    // Output
    cout << "[";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (i != result.size() - 1)
            cout << ",";
    }
    cout << "]" << endl;

    return 0;
}