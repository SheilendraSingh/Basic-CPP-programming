/*
For Binary search Array should be in Monotonic order or in monotonic form (increasing or decreasing order)

eg:-  3, 5, 9, 13, 21

find the key element 13 in the array
*/

#include <iostream>
using namespace std;

int FindIndex(int A[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = (s + ((e - s) / 2));

    while (s <= e)
    {
        if (A[mid] == key)
        {
            return mid;
        }
        else if (A[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + ((e - s) / 2));
    }
    return -1;
}

int main()
{
    int n;
    int arr[5] = {3, 5, 9, 13, 21};
    cout << "The index of Key 13 is : " << FindIndex(arr, 5, 3) << endl;
}
