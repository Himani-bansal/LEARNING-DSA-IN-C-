/*Given two numbers a and b, write a
function to print all odd numbers between them.*/

#include <iostream>
using namespace std;
int oddNumbers(int a, int b)
{

    if (a % 2 == 0)
    {
        a++;
    }
    for (int i = a; i <= b; i += 2)
    {
        cout << i << endl;
    }
}
int main()
{
    int a, b;
    cout << "Enter the starting and ending number" << endl;
    cin >> a >> b;
    cout << "Odd numbers between starting and ending number are: " << endl;
    oddNumbers(a, b);
}