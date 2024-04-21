/*Calculate the sum of all the elements in the
given array.*/

#include <iostream>
using namespace std;

int main()
{

    int arr[5];
    int sum = 0;

    cout << "Enter the elements of the array" << endl;

    for (int &ele : arr)
    {
        cin >> ele;
    }

    for (int ele : arr)
    {
        sum += ele;
    }
    cout << "sum = " << sum;
}