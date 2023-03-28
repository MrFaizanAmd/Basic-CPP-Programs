#include <iostream>
using namespace std;

int max(int a, int b, int c);

int main()
{
    int x, y, z, num;
    cout << "\nThis program help you to find Pythagorean triplet" << endl;
    cout << "Enter the numbers : ";
    cin >> x >> y >> z;

    num = max(x, y, z);

    if (num == x)
    {
        num *= num;
        if (num == y * y + z * z)
        {
            cout << "This numbers are pythagorean triplet";
        }
        else
        {
            cout << "This numbers are not pythagorean triplet";
        }
    }
    else if (num == y)
    {
        num *= num;
        if (num == x * x + z * z)
        {
            cout << "This numbers are pythagorean triplet";
        }
        else
        {
            cout << "This numbers are not pythagorean triplet";
        }
    }
    else if (num == z)
    {
        num *= num;
        if (num == y * y + x * x)
        {
            cout << "This numbers are pythagorean triplet";
        }
        else
        {
            cout << "This numbers are not pythagorean triplet";
        }
    }
    return 0;
}

int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}