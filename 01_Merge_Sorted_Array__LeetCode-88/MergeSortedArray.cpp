#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// LeetCode 88 - Merge Sorted Array --->

/*
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3

Output: [1,2,2,3,5,6]

Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
*/

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int j = 0, i = m; j < n; j++)
        {
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(), nums1.end());
    }
};

int main()
{
    Solution sol;

    // Example input
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;

    // Call merge function
    sol.merge(nums1, m, nums2, n);

    // Print result
    cout << "Merged array: ";
    for (int x : nums1)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
