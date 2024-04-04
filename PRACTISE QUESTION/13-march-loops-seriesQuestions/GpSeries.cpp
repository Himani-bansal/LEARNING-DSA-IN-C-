//Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms. n 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    int r;
    int n;

    cout << "Enter the first term of GP" << endl;
    cin >> a;

    cout << "Enter the common ratio of GP" << endl;
    cin >> r;

    cout << "Enter the number of term of GP" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << a * pow(r, i) << endl;
    }
}

//for the question given set a=1,r=2