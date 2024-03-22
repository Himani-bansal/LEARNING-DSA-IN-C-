/*Q1 : Write a function that takes the radius of
a circle as an argument and returns its area.*/

#include <iostream>
using namespace std;
float area(float r)
{

    float PI = 3.14;
    float area = PI * r * r;
    return area;
}
int main()
{

    float r;
    cout << "Enter the radius of a circle" << endl;
    cin >> r;

    cout << "Area is: " << area(r);
}