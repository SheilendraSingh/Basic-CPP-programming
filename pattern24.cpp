#include <iostream>
using namespace std;

int main()
{
    int i, j, n, m = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << m;
            m += 1;
        }
        cout << endl;
    }
}