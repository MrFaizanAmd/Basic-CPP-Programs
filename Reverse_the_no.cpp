#include <iostream>
using namespace std;

void rev(int n);

int main()
{
    int n;
    cout << "\nThis program convert your no. order into reverse order" << endl;
    cout << "Enter the no. : ";
    cin >> n;

    rev(n);

    return 0;
}

void rev(int n)
{
    int rem, sum = 0;

    for (; n > 0; n /= 10)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
    }

    cout << sum;

    return;
}