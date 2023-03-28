#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 2; j--)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    

    return 0;
}