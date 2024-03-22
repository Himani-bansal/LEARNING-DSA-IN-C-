#include <iostream>
using namespace std;
int countAndSquare(int a)
{
    int count = 0;
    int z;
    while (a >= 0)
    {
        z = a % 10;
        count++;
        a = a / 10;
    }
    cout << count << endl;
    cout << z;
    return z;
}
int main()
{
    int a;
    cout << "Enter the number" << endl;
    cin >> a;
    countAndSquare(a);
}