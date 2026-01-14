#include <iostream>
#include <vector>

using namespace std;

// LeetCode - 26 : Remove Duplicate from sorted array --->

// The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.
// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        // If the array is empty, return 0
        if (nums.empty())
            return 0;

        // k is the index where the next unique element will be placed
        int k = 1;

        // Loop through the array starting from index 1
        for (int i = 1; i < nums.size(); i++)
        {
            // If the current element is different from the previous one
            if (nums[i] != nums[i - 1])
            {
                nums[k] = nums[i];
                k++;
            }
        }
        // Return the number of unique elements
        return k;
    }
};

int main()
{
    Solution solution;

    // Example input
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4};

    // Remove duplicates
    int k = solution.removeDuplicates(nums);

    // Output result
    cout << "Number of unique elements: " << k << endl;
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;
    return 0;
}
