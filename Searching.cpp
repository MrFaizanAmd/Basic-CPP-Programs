#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key);

int main()
{
    int num;
    cout << "Enter the value of an array : ";
    cin >> num;

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the " << i << " value : ";
        cin >> arr[num];
    }

    int key;
    cout << endl
         << "Enter your no. to search : ";
    cin >> key;

    cout << binarySearch(arr, num, key);

    return 0;
}

int binarySearch(int arr[], int n, int key)
{
    int s = 0, mid;

    while (s <= n)
    {
        mid = s + n / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            n = mid - 1;
        }
    }

    return 404;
}