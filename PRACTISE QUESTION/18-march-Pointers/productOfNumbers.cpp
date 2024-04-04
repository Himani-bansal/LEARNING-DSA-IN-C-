#include <iostream>
using namespace std;

int sum(int x, int y)
{

    cout << "sum is " << x + y << endl;
}

int main()
{
    int x, y;

    cout << "enter first number" << endl;
    cin >> x;

    cout << "enter second number" << endl;
    cin >> y;

    int *ptr1 = &x;
    int *ptr2 = &y;

    sum(*ptr1, *ptr2);
}