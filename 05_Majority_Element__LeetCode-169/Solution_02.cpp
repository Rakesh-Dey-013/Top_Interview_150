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

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 0;
        int element;

        for (int i : nums)
        {
            if (count == 0){
                element = i;
                count++;
            }
            else if (element == i)
                count++;

            else
                count--;
        }

        count = 0;
        for(int i : nums) {
            if(element == i) count++;
        }
        return (count > nums.size()/2) ? element : -1;
    }
};

int main()
{
    Solution solution;

    vector<int> nums = {3,2,3};

    int result = solution.majorityElement(nums);

    cout << "Majority element: " << result << endl;

    return 0;
}
