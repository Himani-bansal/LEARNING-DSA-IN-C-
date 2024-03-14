// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int d = 3;
    int n;

    cout << "Enter the number of term of AP" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << a + i * d << " ";
    }
}
