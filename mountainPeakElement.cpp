/*
mountain peak element
*/

#include <iostream>
using namespace std;

int FindPeak(int A[], int n)
{
    int s = 0, e = n - 1;
    int mid = (s + ((e - s) / 2));

    while (s < e)
    {
        if (A[mid] < A[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + ((e - s) / 2));
    }
    return s;
}

int main()
{
    int arr[7] = {3, 5, 9, 21, 12, 4, 1};
    cout << "The index of Peak Element is : " << FindPeak(arr, 7) << endl;
}
