#include <iostream>
using namespace std;

int main()
{
    float length;
    float breadth, area, perimeter;
    cout << "Enter the length of the reactangle" << endl;
    cin >> length;

    cout << "Enter the breadth of the reactangle" << endl;
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if (area > perimeter)
    {
        cout << "Area is greater than perimeter" << endl;
    }
    else if (area < perimeter)
    {
        cout << "Perimeter is greater than area" << endl;
    }
    else
    {
        cout << "Area is equal to perimeter" << endl;
    }

    return 0;
}