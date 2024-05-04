#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "enter the string of length greater than 5" << endl;
    cin >> str;

    string substring = str.substr(1, 3); // coverting in sub string upto given index

    reverse(substring.begin(), substring.end()); // reverse the substring

    str.replace(1, 4, substring); // replacing the reversed string

    cout << str;
}