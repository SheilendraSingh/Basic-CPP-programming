#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {

        for (j = n - i + 1; j >= 1; j--)
        {
            cout << "*";
        }
        // for (j = i - 1; j <= i; j++)
        // {
        //     cout << " ";
        // }
        cout << endl;
    }
}