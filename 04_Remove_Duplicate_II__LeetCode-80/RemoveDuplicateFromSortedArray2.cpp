#include <iostream>
#include <vector>
using namespace std;

// LeetCode 80 - Remove Duplicate From Sorted Array II --->
/*
Input: nums = [1,1,1,2,2,3]
Output: 5, nums = [1,1,2,2,3,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = 2;
        if (nums.size() <= 2)
            return nums.size();

        for (int i = 2; i < nums.size(); i++)
        {
            if (nums[i] != nums[k - 2])
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main()
{
    Solution sol;

    // Example input
    vector<int> nums = {1, 1, 1, 2, 2, 3};

    int k = sol.removeDuplicates(nums);

    cout << "k = " << k << endl;
    cout << "Modified array: ";
    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
