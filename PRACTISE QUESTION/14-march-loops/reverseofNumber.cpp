// WAP to print reverse of a given number.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    while (n > 0)
    {
        int x = n % 10;
        {
            cout << x;
        }
        n = n / 10;
    }
}