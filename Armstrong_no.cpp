#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nThis program check armstrong no. " << endl;
    cout << "Enter the no. : ";
    cin >> n;

    int originalN = n, rem, sum = 0;
    for (; n > 0; n /= 10)
    {
        rem = n % 10;
        sum += rem * rem * rem;
    }

    if (sum == originalN)
    {
        cout << "It is Armstrong Number";
    }

    else
    {
        cout << "It is not Armstrong Number";
    }

    return 0;
}