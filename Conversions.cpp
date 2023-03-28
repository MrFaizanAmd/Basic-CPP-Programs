#include <iostream>
using namespace std;

void decimalToBinary(int n);

int main()
{
    int num;
    cout << "This program convert your decimal number into all existing conversions" << endl
         << "---" << endl;
    cout << "Enter the no. : ";
    cin >> num;

    decimalToBinary(num);

    return 0;
}

void decimalToBinary(int n)
{
    short int binary[40];
    int i = 0;

    for (; n > 0; i++)
    {
        binary[i] = n % 2;
        n /= 2;
    }
    for (i = i - 1; i >= 0; i--)
    {
        cout << binary[i];
    }

    return;
}