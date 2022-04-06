#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter Three Numbers : ";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is Maximum";
        }
        else
        {
            cout << c << " is Maximum";
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is Maximum";
        }
        else
        {
            cout << c << " is Maximum";
        }
    }

    return 0;
}