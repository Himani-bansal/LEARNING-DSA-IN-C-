/*Find the second largest element in the given
Array.*/

#include <iostream>
using namespace std;

int main()
{
    int max;
    int max2 = -1;
    int arr[5] = {45, 34, 56, 29, 38};

    max = -1;

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max2 && arr[i] != max)
        {
            max2 = arr[i];
        }
    }
    cout << "Largest: " << max << endl;
    cout << "Second Largest: " << max2 << endl;
}