/*The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        int a = 0, b = 1, i = 2, num;
        if (n == 0)
        {
            return a;
        }
        if (n == 1)
        {
            return b;
        }
        while (i <= n)
        {
            num = a + b;
            a = b;
            b = num;
            i++;
        }
        return num;
    }
};
int main()
{
    Solution s1;
    cout << "Enter a number";
    int a;
    cin >> a;
    cout << s1.fib(a) << endl;
    return 0;
}