// WAP to check if a number is prime or not (use of break statement)

#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;

    cout << "Enter the number" << endl;
    cin >> n;
    if (n <= 1)
    {
        isPrime = false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Number is prime" << endl;
    }
    else
    {
        cout << "Number is not prime" << endl;
    }

    return 0;
}