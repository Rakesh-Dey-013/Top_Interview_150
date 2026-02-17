#include <iostream>
#include <unordered_map>
using namespace std;

// LeetCode 13 : Roman to Integer
/*
Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
*/

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> mp = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int ans = 0;

        for (int i = 0; i < s.length(); i++)
        {
            // If current value is smaller than next value → subtract
            if (i < s.length() - 1 && mp[s[i]] < mp[s[i + 1]])
            {
                ans -= mp[s[i]];
            }
            else
            {
                ans += mp[s[i]];
            }
        }
        return ans;
    }
};

int main()
{
    // ✅ Hardcoded Input
    string s = "MCMXCIV";

    Solution sol;
    int result = sol.romanToInt(s);

    cout << "Input  : " << s << endl;
    cout << "Output : " << result << endl;

    return 0;
}