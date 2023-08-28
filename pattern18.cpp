#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    // for (i = n; i >= 1; i--)
    // {
    //     for (j = 1; j <= (n - i + 1); j++)
    //     {
    //         char ch = 'A' + i + j - 2;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    for (i = 1; i <= n; i++)
    {
        char ch = 'A' + n - i;
        for (j = 1; j <= i; j++)
        {
            cout << ch;
            ch += 1;
        }
        cout << endl;
    }
}