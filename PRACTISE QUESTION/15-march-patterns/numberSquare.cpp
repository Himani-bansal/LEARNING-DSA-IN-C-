/*
Print the number square pattern
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of rows and columns of square" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            cout << j << " ";
        }
        cout << endl;
    }
}

// for given question set n=4