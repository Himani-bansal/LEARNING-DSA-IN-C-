/*Write a function to count the number
of digits in a number and then print the square of this number.*/

#include <iostream>
using namespace std;
int countAndSquare(int a)
{
    int count = 0;
    int z;
    int square = a * a;
    while (a > 0)
    {
        z = a % 10;
        count++;
        a = a / 10;
    }
    cout << "Counts of the number is: " << count << endl;

    return square;
}
int main()
{
    int a;
    cout << "Enter the number" << endl;
    cin >> a;
    cout << "square of number is " << countAndSquare(a);
}