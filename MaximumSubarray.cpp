/*Given an integer array nums, find the
subarray
 with the largest sum, and return its sum.



Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        int maxi = nums[0];

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];

            maxi = max(maxi, sum);

            if (sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }
};
int main()
{
    Solution s1;
    cout << "Enter the size of array";
    int n, a;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cout << s1.maxSubArray(v) << endl;
    return 0;
}