#include <iostream>
using namespace std;

int squrt(int N)
{
    int s = 0;
    int e = N;
    long long int m = (s + ((e - s) / 2));
    long long int ans = -1;

    while (s <= e)
    {
        long long int square = (m * m);
        if (square == N)
        {
            return m;
        }
        if (square < N)
        {
            ans = m;
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
        m = (s + ((e - s) / 2));
    }
    return ans;
}
// for more precision

double morePresicion(int n, int precision, int temsol)
{
    double factor = 1;
    double ans = temsol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; (j * j) < n; j = (j + factor))
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int a;
    cout << "Enter the precision : ";
    cin >> a;

    int temsol = squrt(num);
    cout << "Square Root of the number is : " << morePresicion(num, a, temsol) << endl;
    return 0;
}