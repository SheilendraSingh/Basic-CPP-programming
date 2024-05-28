/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.



Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void RotateArray(vector<int> &nums, int k)
    {
        vector<int> temp(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            temp[(i + k) % nums.size()] = nums[i];
        }
        nums = temp;
        for (int a : nums)
        {
            cout << a << " ";
        }
    }
};
int main()
{
    Solution s1;
    cout << "Enter size of array: ";
    int n;
    cin >> n;
    vector<int> v;
    cout << "Enter the elemnets in arrary: ";
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> j;
        v.push_back(j);
    }
    cout << "Enter the rotation: ";
    int r;
    cin >> r;

    s1.RotateArray(v, r);
    return 0;
}