/*
OutPut:-
5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, n, m = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << m << " ";
            m += 1;
        }
        cout << endl;
    }
}