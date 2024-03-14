// Display this AP - 100,97,94,..upto all terms which are positive. N

#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    int d = -3;
    int term = a;
    while (term > 0)
    {
        cout << term << " ";
        term = term + d;
    }
    return 0;
}