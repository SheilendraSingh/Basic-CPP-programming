#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= n; j++)
    //     {
    //         char ch = 'A' + i + j - 2;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    for (i = 1; i <= n; i++)
    {
        char ch = 'A' + i - 1;
        for (j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
}