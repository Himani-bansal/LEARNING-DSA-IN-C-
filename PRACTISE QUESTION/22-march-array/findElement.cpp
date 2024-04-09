/*Find the element x in the array . Take array and
x as input.*/

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int x;

    cout << "Enter the elements of the array" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to find" << endl;
    cin >> x;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == x)
        {
            cout << "Found at " << i << endl;
        }
    }
}