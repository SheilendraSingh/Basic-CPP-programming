/*Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        set<int> s(nums.begin(), nums.end());
        int x = nums.size();
        int y = s.size();
        if (x == y)
        {
            return false;
        }
        return true;
    }
};

int main()
{
    Solution s1;
    cout << "Enter size of array: ";
    int n, a;
    vector<int> v;
    cin >> n;
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cout << s1.containsDuplicate(v);
}