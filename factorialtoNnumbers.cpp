/*A number N is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120,
Given a number N, the task is to return the list/vector of the factorial numbers smaller than or equal to N.*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> factorialNumber(long long N)
    {
        vector<long long> v;
        long long num = 1;
        for (long long i = 1; i <= N; i++)
        {
            num *= i;
            if (num > N)
            {
                break;
            }
            v.push_back(num);
        }
        return v;
    }
};
int main()
{
    Solution s1;
    cout << "Enter a Number" << endl;
    int n;
    cin >> n;
    vector<long long> result = s1.factorialNumber(n);
    for (long long num : result)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
