/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int fwindex = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] != nums[i])
            {
                nums[fwindex] = nums[i];
                fwindex++;
            }
        }
        return fwindex;
    }
};

int main()
{
    Solution s1;
    cout << "Enter the size of array: ";
    int n;
    vector<int> v;
    cin >> n;
    cout << "Enter the numbers in array: ";
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> j;
        v.push_back(i);
    }
    cout << "{";
    for (int a : v)
    {
        cout << a << " ";
    }

    cout << "}" << endl
         << s1.removeDuplicates(v) << endl;
}