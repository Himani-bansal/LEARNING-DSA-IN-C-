/*WAP to find the smallest missing positive element in the sorted Array that contains only
positive elements.*/

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 5, 6};

    for (int i = 0; i < 4; i++)
    {
        if (arr[i + 1] - arr[i] == 1)
        {
            arr[i + 1] = arr[i];
                }
        else
        {

            cout << " Missing Element is " << arr[i] + 1;
            break;
        }
    }
}
