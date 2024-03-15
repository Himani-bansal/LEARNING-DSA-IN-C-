/*
Print the alphaber square pattern
A B C D
A B C D
A B C D
A B C D
*/

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

            char ch = 'A' + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}