#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << " Enter the number of rows : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0 && j % 2 != 0)
            {
                cout << "0 ";
            }
            else if (j % 2 == 0 && i % 2 != 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }

    return 0;
}