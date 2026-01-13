#include <iostream>
#include <vector>
using namespace std;

// LeetCode 27 : Remove Element --->

// Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.

/*
Input: nums = [3,2,2,3], val = 3

Output: 2, nums = [2,2,_,_]

Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int index = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};

int main()
{
    // Input
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    Solution solution;
    int newLength = solution.removeElement(nums, val);

    // Output
    cout << "Output: " << newLength << ", nums = [";
    for (int i = 0; i < newLength; i++)
    {
        cout << nums[i];
        if (i < newLength - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
