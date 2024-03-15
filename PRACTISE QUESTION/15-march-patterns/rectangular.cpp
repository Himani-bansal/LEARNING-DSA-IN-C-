/*Print the solid reactangle pattern

*****
*****
*****
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;

    cout << "Enter the number of rows" << endl;
    cin >> n;

    cout << "Enter the number of columns" << endl;
    cin >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {

            cout << "*";
        }
        cout << endl;
    }
}

//for given question set n=3, m=5