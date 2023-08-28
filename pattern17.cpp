#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    char m = 'A';
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << m << " ";
            m += 1;
        }
        cout << endl;
    }
}