/*Count the number of elements in given array
greater than a given number x.*/

#include <iostream>
using namespace std;

int main()
{
    int n, y;
    int count = 0;
    int arr[n];

    cout << "Enter the size of the array" << endl;
    cin >> n;

    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to find " << endl;
    cin >> y;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > y)
        {
            count++;
        }
    }
    cout << count << endl;
}