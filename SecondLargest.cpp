/*Given an array Arr of size N, print the second largest distinct element from an array. If the second largest element doesn't exist then return -1.*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n)
    {
        // code here
        int l = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > l)
            {
                l = arr[i];
            }
        }

        int r = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != l)
            {
                if (r == -1)
                {
                    r = i;
                }
                else if (arr[i] > arr[r])
                {
                    r = i;
                }
            }
        }
        int g = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[0])
            {
                g++;
            }
        }
        if (g == n)
        {
            return -1;
        }
        return arr[r];
    }
};
int main()
{
    Solution s1;
    cout << "Enter Size of array: ";
    int a;
    cin >> a;
    int arr[a];
    cout << "Enter elements of array with single space: ";
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    cout << s1.print2largest(arr, a) << endl;
    return 0;
}