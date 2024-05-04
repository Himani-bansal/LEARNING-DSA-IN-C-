#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string str;

    cout << "Enter the string even length" << endl;
    cin >> str;

    reverse(str.begin(), str.begin() + str.length() / 2);

    cout << str;
}