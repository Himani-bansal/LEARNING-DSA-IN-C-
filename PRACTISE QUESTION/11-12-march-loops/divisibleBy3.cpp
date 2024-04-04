#include <iostream>
using namespace std;

int main()
{
    int i;

    for (i = 1; i <= 100; i += 2)
    {
        if (i % 3 == 0)
            cout << i << endl;
    }
}