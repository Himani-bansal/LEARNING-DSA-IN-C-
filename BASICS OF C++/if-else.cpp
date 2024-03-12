#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number";
    cin >> num;

    if (num <= 50)
    {
        cout << "Number is less than 50." << endl;
    }
    else
    {
        cout << "Number is greater than 50" << endl;
    }

    return 0;
}