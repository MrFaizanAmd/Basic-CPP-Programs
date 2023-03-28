#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. : ";
    cin >> n;

    for (int i = 1; i <= 3; i++) // row is fixed which is three
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 4 == 0 || i == 2 && j % 2 == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}