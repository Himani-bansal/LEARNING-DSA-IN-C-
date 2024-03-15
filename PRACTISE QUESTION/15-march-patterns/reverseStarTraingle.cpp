/*
Print the reverse star triangle pattern
****
***
**
*
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// for given question set n=4