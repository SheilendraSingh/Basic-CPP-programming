/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {

                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{
    Solution s1;
    cout << "ENter the sixe of array: ";
    int n, a;
    cin >> n;
    cout << "Enter the elements in array: ";
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cout << "Enter the target number: ";
    int t;
    cin >> t;

    vector<int> result = s1.twoSum(v, t);
    for (int b : result)
    {
        cout << b << " ";
    }
    return 0;
}