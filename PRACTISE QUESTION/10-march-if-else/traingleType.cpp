#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the length of first side" << endl;
    cin >> a;

    cout << "Enter the length of second side" << endl;
    cin >> b;

    cout << "Enter the length of third side" << endl;
    cin >> c;

    if (a == b && b == c )
    {
        cout << "It is an equilateral triangle" << endl;
    }
    else if (a != b && b != c && a != c)
    {
        cout << "It is a scalene triangle" << endl;
    }
    else
    {
        cout << "It is an isosceles triangle" << endl;
    }

    return 0;
}