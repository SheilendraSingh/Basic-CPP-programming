#include <iostream>
using namespace std;

void ReverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10] = {1, 7, 9, 10, 57, 43, 56, 2, 3, 44};
    cout << endl;
    for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    ReverseArray(arr, 10);
    return 0;
}