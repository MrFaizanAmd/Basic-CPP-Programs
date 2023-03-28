#include <iostream>
using namespace std;

void Prime(int a, int b);
bool isPrime(int num);

int main()
{
    int first, last;
    cout << "\nThis program print all prime no. between starting to ending no." << endl;
    cout << "Enter the no. : ";
    cin >> first >> last;

    Prime(first, last);

    return 0;
}

void Prime(int a, int b)
{
    cout << endl;
    for (; a <= b; a++)
    {
        if (a == 1 || a == 0)
        {
            continue;
        }
        else if (isPrime(a))
        {
            // cout << a << " ";
            cout << a << endl;
        }
    }
    return;
}

bool isPrime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}