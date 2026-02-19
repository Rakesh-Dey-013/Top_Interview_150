#include <iostream>
#include <vector>
#include <string>

using namespace std;

// LeetCode 12 : Integer to Roman
/*
Input: num = 58
Output: "LVIII"
*/

class Solution
{
public:
    string intToRoman(int num)
    {
        vector<pair<int, string>> values = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

        string result;

        for (auto &i : values)
        {
            while (num >= i.first)
            {
                result += i.second;
                num -= i.first;
            }
        }
        return result;
    }
};

int main()
{
    Solution sol;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    string roman = sol.intToRoman(num);

    cout << "Roman numeral: " << roman << endl;

    return 0;
}