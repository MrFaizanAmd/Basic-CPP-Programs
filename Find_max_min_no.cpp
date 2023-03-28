// This program not working properly
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the limit of an Array : ";
    cin >> num;

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the " << i << " Value : ";
        cin >> arr[i];
    }

    int maxNo = INT_MIN, minNo = INT_MAX;

    for (int i = 0; i < num; i++)
    {
        if (arr[num] > minNo)
        {
            minNo = arr[i];
        }
        else if (arr[num] < maxNo)
        {
            maxNo = arr[i];
        }
    }

    cout << "Max Number : " << maxNo << endl
         << "Min Number : " << minNo << endl;

    // return ;
}