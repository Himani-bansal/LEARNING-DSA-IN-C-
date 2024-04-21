/*Given an array of marks of students, if the
mark of any student is less than 35 print its roll
number. [roll number here refers to the index of the
array.]*/

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {50, 70, 23, 45, 67};

    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] <= 35)
        {
            cout << "marks of roll no." << i << "is less than 35" << endl;
        }
    }
}