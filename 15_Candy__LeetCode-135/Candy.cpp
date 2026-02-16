#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// LeetCode 135 : Candy
/*
Input: ratings = [1,0,2]
Output: 5
Explanation: You can allocate to the first, second and third child with 2, 1, 2 candies respectively.
*/

class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int n = ratings.size();
        vector<int> candies(n, 1);
        int ans = 0;

        // Left to Right pass
        for (int i = 1; i < n; i++)
        {
            if (ratings[i] > ratings[i - 1])
            {
                candies[i] = candies[i - 1] + 1;
            }
        }

        // Right to Left pass
        for (int i = n - 2; i >= 0; i--)
        {
            if (ratings[i] > ratings[i + 1])
            {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }

        // Calculate total candies
        for (int c : candies)
        {
            ans += c;
        }

        // Print candies distribution
        cout << "Ratings : ";
        for (int r : ratings)
            cout << r << " ";

        cout << "\nCandies : ";
        for (int c : candies)
            cout << c << " ";

        cout << "\nTotal Candies Needed: " << ans << endl;

        return ans;
    }
};

int main()
{
    // ✅ Hardcoded Input
    vector<int> ratings = {1, 0, 2};

    Solution sol;
    sol.candy(ratings);

    return 0;
}