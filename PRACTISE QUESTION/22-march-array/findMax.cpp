/*Find the maximum value out of all the elements
in the array.*/

#include <iostream>
using namespace std;

int main()
{
    int max;
    int arr[5] = {67, 34, 56, 29, 38};

    max = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            arr[i] = max;
        }
    }
    cout << "Max: " << max << endl;
}