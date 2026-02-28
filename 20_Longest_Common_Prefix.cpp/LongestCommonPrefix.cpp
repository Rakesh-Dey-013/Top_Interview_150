#include <iostream>
#include <vector>
#include <string>

using namespace std;

// LeetCode 14 : Longest Common Prefix
/*
Input: strs = ["flower","flow","flight"]
Output: "fl"

*/

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
        return "";

    string ans = strs[0];

    for (string s : strs)
    {
        while (s.find(ans) != 0)
        {
            ans = ans.substr(0, ans.length() - 1);

            // Safety check (optional but good practice)
            if (ans.empty())
                return "";
        }
    }
    return ans;
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};

    string result = longestCommonPrefix(strs);

    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}