/*
eg:-  3, 5, 9, 3, 3, 3, 3 ,3, 13, 21

find the First and Last Occurrence of key element 3 in the array
*/

#include <iostream>
using namespace std;

int FirstOcc(int A[], int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;
    int mid = (s + ((e - s) / 2));

    while (s <= e)
    {
        if (A[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (A[mid] < key)
        {
            s = mid + 1;
        }
        else if (A[mid] > key)
        {
            e = mid - 1;
        }
        mid = (s + ((e - s) / 2));
    }
    return ans;
}

int LastOcc(int A[], int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;
    int mid = (s + ((e - s) / 2));

    while (s <= e)
    {
        if (A[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (A[mid] < key)
        {
            s = mid + 1;
        }
        else if (A[mid] > key)
        {
            e = mid - 1;
        }
        mid = (s + ((e - s) / 2));
    }
    return ans;
}

int main()
{
    int n;
    int arr[10] = {3, 5, 9, 3, 3, 3, 3, 3, 13, 21};
    cout << "The index of First Occurrence of Key 13 is : " << FirstOcc(arr, 10, 3) << endl;
    cout << "The index of Last Occurrence of Key 13 is : " << LastOcc(arr, 10, 3) << endl;
}
