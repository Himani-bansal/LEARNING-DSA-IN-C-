#include <iostream>
using namespace std;

int main()
{
    int sub[50], i;
    for (i = 0; i <= 48; i++)
        ;
    {
        sub[i] = i;
        cout << sub[i] << endl;
    }
    return 0;
}
// As there is a semicolon after for loop so it increment value every time but didnt print itat the end value of i will be 49 an print it.
// output =49
