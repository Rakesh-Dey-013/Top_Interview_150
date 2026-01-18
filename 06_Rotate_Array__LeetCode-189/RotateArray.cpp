#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// LeetCode 189 : Rotate Array --->
/*
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        k = k % n;  // handle cases where k > n
        std::rotate(nums.begin(), nums.end() - k, nums.end());
    }
};

int main() {
    Solution solution;

    int k = 3;

    vector<int> nums = {1,2,3,4,5,6,7};

    solution.rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
