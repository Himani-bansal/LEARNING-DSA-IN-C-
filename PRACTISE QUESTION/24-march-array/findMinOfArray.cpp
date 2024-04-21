/*Find the minimum value out of all elements in the array.*/
#include <iostream>
using namespace std;

int main()
{
    int min;
    int arr[5] = {67, 34, 56, 29, 38};

    min = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Minimum is: " << min << endl;
}