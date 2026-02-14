#include <bits/stdc++.h>
using namespace std;

// LeetCode 380 : Insert Delete GetRandom
/* Input:
["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"]
[[], [1], [2], [2], [], [1], [2], []]

Output: [null, true, false, true, 2, true, false, 2]
*/

class RandomizedSet
{
public:
    set<int> ans;

    RandomizedSet() {}

    bool insert(int val)
    {
        if (ans.find(val) != ans.end())
        {
            return false; // already exists
        }
        ans.insert(val);
        return true;
    }

    bool remove(int val)
    {
        return ans.erase(val) > 0;
    }

    int getRandom()
    {
        if (ans.empty())
            throw runtime_error("Set is empty");

        auto it = ans.begin();
        advance(it, rand() % ans.size());
        return *it;
    }
};

int main()
{
    srand(time(0)); // Seed random generator

    RandomizedSet *obj = new RandomizedSet();

    cout << boolalpha; // print true/false instead of 1/0

    // Simulating Input:
    // ["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"]
    // [[], [1], [2], [2], [], [1], [2], []]

    cout << "null" << endl;           // RandomizedSet()
    cout << obj->insert(1) << endl;   // insert(1)
    cout << obj->remove(2) << endl;   // remove(2)
    cout << obj->insert(2) << endl;   // insert(2)
    cout << obj->getRandom() << endl; // getRandom()
    cout << obj->remove(1) << endl;   // remove(1)
    cout << obj->insert(2) << endl;   // insert(2)
    cout << obj->getRandom() << endl; // getRandom()

    delete obj;
    return 0;
}