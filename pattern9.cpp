/*
Output:-
5
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= (i * 2) - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}