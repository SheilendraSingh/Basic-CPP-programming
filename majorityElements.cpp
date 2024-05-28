/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.



Example 1:

Input: nums = [3,2,3]
Output: 3*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int MajorityElement(vector<int> &nums)
    {
        unordered_map<int, int> m;
        int maxfrq = 0;
        int maxAns = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
            maxfrq = max(maxfrq, m[nums[i]]);
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (maxfrq == m[nums[i]])
            {
                maxAns = nums[i];
                break;
            }
        }
        return maxAns;
    }
};
int main()
{
    Solution s1;
    cout << "Enter size of array: ";
    int n, a;
    cin >> n;
    vector<int> v;
    cout << "Enter the Elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    cout << s1.MajorityElement(v) << endl;
    return 0;
}