#include <iostream>
using namespace std;

int getPivot(int A[], int N)
{

    int s = 0;
    int e = N - 1;
    int m = (s + ((e - s) / 2));

    while (s < e)
    {
        if (A[m] >= A[0])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
        m = (s + ((e - s) / 2));
    }
    return A[s];
}
int main()
{

    int n = 0;
    int arr[n];

    cout << "Size of Array :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "element no. " << i;
        cin >> arr[i];
    }
    cout << "Pivot element is : " << getPivot(arr, n);

    return 0;
}