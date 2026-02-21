#include <iostream>
#include <string>

using namespace std;

// LeetCode 58. Length of Last Word
/*
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
*/

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int right = s.length() - 1;
        int ans = 0;

        for (int i = right; i >= 0; i--)
        {
            if (s[i] == ' ' && ans == 0)
                continue; // skip trailing spaces
            if (s[i] == ' ' && ans > 0)
                break; // stop at space after word
            ans++;
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    string s;
    cout << "Enter a string: ";
    getline(cin, s); // allows spaces in input

    int result = sol.lengthOfLastWord(s);

    cout << "Length of last word: " << result << endl;

    return 0;
}