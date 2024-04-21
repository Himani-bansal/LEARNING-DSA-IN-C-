/*Calculate the product of all the elements in the given array.*/

#include <iostream>
using namespace std;

int main()
{

    int arr[5];
    int product = 1;

    cout << "Enter the elements of the array" << endl;

    for (int &ele : arr)
    {
        cin >> ele;
    }

    for (int ele : arr)
    {
        product = product * ele;
    }
    cout << "Product = " << product;
}