#include <iostream>
using namespace std;

int nCr(int n, int r);
int fact(int n);

int main()
{
    int n;
    cout << "\nThis program print a pattern of pascal triangle" << endl;
    cout << "Enter the no. : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n-1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int fact(int n)
{
    int fact = 1;

    for (; n >= 1; n--)
    {
        fact = fact * n;
    }
    return fact;
}