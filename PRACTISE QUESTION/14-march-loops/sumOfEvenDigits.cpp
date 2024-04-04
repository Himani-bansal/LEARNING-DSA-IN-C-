// WAP to print the sum of all the even digits of a given number.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    int sum = 0;
    while (n > 0)
    {
        int x = n % 10;
        if (x % 2 == 0)
        {
            sum = sum + x;
        }
        n = n / 10;
    }

    cout << sum << endl;
}