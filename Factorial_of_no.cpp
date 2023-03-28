#include <iostream>
using namespace std;

int fact(int n);

int main()
{
    int num;
    cout << "\nThis program print all factorial numbers till your input number" << endl;
    cout << "Enter the no. : ";
    cin >> num;

    cout << fact(num);

    return 0;
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