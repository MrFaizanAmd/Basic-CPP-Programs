#include <iostream>
using namespace std;

void fib(int n);

int main()
{
    int num;
    cout << "\nThis program print all fibonacci numbers till your input number" << endl;
    cout << "Enter the no. : ";
    cin >> num;

    fib(num);

    return 0;
}

void fib(int n)
{
    int t1 = 0, t2 = 1, temp;

    for (int i = 0; i < n; i++)
    {
        cout << t1 << endl;
        temp = t1 + t2;
        t1 = t2;
        t2 = temp;
    }
    return ;
}