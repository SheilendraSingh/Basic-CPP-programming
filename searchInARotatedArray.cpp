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
    return s;
}

int binarySearch(int start, int end, int key, int a[])
{

    int mid = (start + ((end - start) / 2));

    while (start <= end)
    {
        if (a[mid] == key)
        {
            return mid;
        }
        if (a[mid] > key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + ((end - start) / 2));
    }
    return -1;
}

int findPosition(int X[], int m, int k)
{
    int pivot = getPivot(X, m);
    if (k >= X[pivot] && k <= X[m - 1])
    {
        return binarySearch(pivot, m - 1, k, X);
    }
    else
    {
        return binarySearch(0, pivot - 1, k, X);
    }
}

int main()
{

    int n = 0;
    int arr[n];
    int Key;

    cout << "Size of Array: ";
    cin >> n;
    cout << "Enter the Key you want to find: ";
    cin >> Key;

    for (int i = 0; i < n; i++)
    {
        cout << "element no. " << i << ": ";
        cin >> arr[i];
    }
    cout << "Index of key is : " << findPosition(arr, n, Key);

    return 0;
}