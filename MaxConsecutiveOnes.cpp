/*Given a binary array nums, return the maximum number of consecutive 1's in the array.



Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0, maxi = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            else
            {
                count = 0;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};

int main()
{
    Solution s1;
    cout << "Enter the size of the array: ";
    int n, a;
    vector<int> v;
    cin >> n;
    cout << "Enter the Elements inside array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cout << s1.findMaxConsecutiveOnes(v) << endl;
    return 0;
}