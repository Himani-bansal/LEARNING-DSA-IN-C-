/*write a function to calculate the
Combination and Permutation*/

#include <iostream>
using namespace std;

long int fact(int a)

{

    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        a = a * fact(a - 1);
    }
    return a;
}

int combination(int n, int r)
{
    int a = fact(n) / (fact(r) * fact(n - r));
    return a;
}

int permutation(int n, int r)
{
    int a = fact(n) / fact(n - r);
    return a;
}

int main()
{
    int n, r;
    cout << "Enter the value of n and r" << endl;
    cin >> n >> r;

    cout << "Combination is: " << combination(n, r) << endl;
    cout << "Permuatation is: " << permutation(n, r) << endl;
}