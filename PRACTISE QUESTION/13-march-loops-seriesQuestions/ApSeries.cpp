//Display this AP - 1,3,5,7,9.. upto ‘n’ terms.  


#include <iostream>
using namespace std;

int main()
{
    int a;
    int d;
    int n;

    cout << "Enter the first term of AP" << endl;
    cin >> a;

    cout << "Enter the common difference of AP" << endl;
    cin >> d;

    cout << "Enter the number of term of AP" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << a + i * d << " ";
    }
}


//for the given question set a=1, d=2