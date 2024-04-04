#include <iostream>
using namespace std;

int main()
{
    int x1, x2, x3, y1, y2, y3, m1, m2;

    cout << "Enter the coordinates of first point" << endl;
    cin >> x1 >> y1;

    cout << "Enter the coordinates of second point" << endl;
    cin >> x2 >> y2;

    cout << "Enter the coordinates of third point" << endl;
    cin >> x3 >> y3;

    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);

    if (m1 == m2)
    {
        cout << "Points are collinear" << endl;
    }
    else
    {
        cout << "Points are not collinear" << endl;
    }
}