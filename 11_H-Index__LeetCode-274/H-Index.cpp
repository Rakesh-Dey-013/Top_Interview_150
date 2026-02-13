#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// LeetCode 274 : H-Index
/*
Input: citations = [3,0,6,1,5]
Output: 3
Explanation: [3,0,6,1,5] means the researcher has 5 papers in total and each of them had received 3, 0, 6, 1, 5 citations respectively.
*/

class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        sort(citations.begin(), citations.end());
        int n = citations.size();

        for (int i = 0; i < n; i++)
        {
            int h = n - i;
            if (citations[i] >= h)
            {
                return h;
            }
        }
        return 0;
    }
};

int main()
{
    vector<int> citations = {3, 0, 6, 1, 5};

    Solution sol;
    int result = sol.hIndex(citations);

    cout << "Input: citations = [3,0,6,1,5]" << endl;
    cout << "Output: " << result << endl;

    return 0;
}