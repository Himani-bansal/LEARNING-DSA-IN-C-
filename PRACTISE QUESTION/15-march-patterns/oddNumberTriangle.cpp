/*
Print the odd Number Triangle pattern

1
1 3
1 3 5
1 3 5 7
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
        for (int j = 1; j <= i; j++)
        {
            cout << 2 * j - 1 << " ";
        }
        cout << endl;
    }
}

// for given question set n=4;