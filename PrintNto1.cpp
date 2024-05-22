#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int PrintNtoOne(int N)
    {
        while (N > 1)
        {
            cout << N << " ";
            N--;
        }
        return 1;
    }
};

int main()
{
    Solution s1;
    cout << "Enter a number" << endl;
    int n;
    cin >> n;
    cout << s1.PrintNtoOne(n) << endl;
    return 0;
}