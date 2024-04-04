// Print the nth fibonacci number

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a1 = 0;
    int a2 = 1;
    int number = 0;

    if (n == 0)
        number = a1;
    else if (n == 1)
        number = a2;
    else
    {
        for (int i = 2; i <= n; ++i)
        {
            number = a1 + a2;
            a1 = a2;
            a2 = number;
        }
    }

    cout << "The " << n << "th Fibonacci number is: " << number << endl;

    return 0;
}
