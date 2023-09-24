#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
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

    int key;
    cout << "Give us a Key to find: ";
    cin >> key;

    bool found = linearSearch(arr, 10, key);

    if (found)
    {
        cout << "Key is found" << endl;
    }
    else
    {
        cout << "Key isn't found" << endl;
    }

    return 0;
}