#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> lcmAndGcd(long long a, long long b)
    {
        vector<long long> answer;
        long long gcd = __gcd(a, b);
        long long lcm = (a * b) / gcd;
        answer.push_back(lcm);
        answer.push_back(gcd);
        return answer;
        return answer;
    }
};

int main()
{
    Solution s1;
    cout << "Enter numbers" << endl;
    long long n, m;
    cin >> n >> m;
    vector<long long> result = s1.lcmAndGcd(n, m);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}