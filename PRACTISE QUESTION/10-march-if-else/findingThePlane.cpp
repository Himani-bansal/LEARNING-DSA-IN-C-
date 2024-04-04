#include <iostream>
using namespace std;

int main()
{
    float x, y;

    cout << "Enter the x coordinate of the plane" << endl;
    cin >> x;

    cout << "Enter the y coordinate of the plane" << endl;
    cin >> y;

    if (x == 0 && y != 0)
    {
        cout << "Points lies on y axis" << endl;
    }
    else if (y == 0 && x != 0)
    {
        cout << "Points lies on x axis" << endl;
    }
    else if (x == 0 && y == 0)
    {
        cout << "Points lies on origin" << endl;
    }
    else
    {
        cout << "Points lies on x-y plane" << endl;
    }

    return 0;
}