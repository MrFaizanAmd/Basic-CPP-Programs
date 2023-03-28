#include <iostream>
using namespace std;

int fact(int n);
int nCr(int n, int r);

int main()
{
    int num, rep;
    cout << "\nThis program print all factorial numbers till your input number" << endl;
    cout << "Enter the no. : ";
    cin >> num >> rep;

    cout << nCr(num, rep);

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