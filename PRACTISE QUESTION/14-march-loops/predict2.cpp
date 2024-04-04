#include <iostream>
using namespace std;

int main()
{
    int i;
    while (i = 10)
    {
        cout << i << endl;
        i = i + 1;
    }
    return 0;
}

// as i has not initialised any value so it will always print 10.