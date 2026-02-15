#include <iostream>
#include <vector>
using namespace std;

// LeetCode 134 : Gas Station
/*
Input: gas = [1,2,3,4,5], cost = [3,4,5,1,2]
Output: 3
Explanation:
Start at station 3 (index 3) and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
Travel to station 4. Your tank = 4 - 1 + 5 = 8
Travel to station 0. Your tank = 8 - 2 + 1 = 7
Travel to station 1. Your tank = 7 - 3 + 2 = 6
Travel to station 2. Your tank = 6 - 4 + 3 = 5
Travel to station 3. The cost is 5. Your gas is just enough to travel back to station 3.
Therefore, return 3 as the starting index.
*/

class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int totalGas = 0;
        int currentGas = 0;
        int start = 0;

        for (int i = 0; i < gas.size(); i++)
        {
            totalGas += gas[i] - cost[i];
            currentGas += gas[i] - cost[i];

            if (currentGas < 0)
            {
                currentGas = 0;
                start = i + 1;
            }
        }

        return (totalGas < 0) ? -1 : start;
    }
};

int main()
{
    // ✅ Input
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    Solution sol;
    int result = sol.canCompleteCircuit(gas, cost);

    cout << "Gas  : ";
    for (int g : gas)
        cout << g << " ";

    cout << "\nCost : ";
    for (int c : cost)
        cout << c << " ";

    cout << "\n\nOutput: " << result << endl;

    return 0;
}