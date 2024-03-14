// WAP to count digits of a given number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    int count = 0;
    while (n > 0)
    {
        int x = n % 10;
        count++;

        n = n / 10;
    }

    cout << count << endl;
}