#include <iostream>
using namespace std;

int main()
{
    while ('a' < 'b')
        cout << "malayalam is a palindrome" << endl;
    return 0;
}

// as a and b are compared in commas as characters so they will compare as their ascii values where a is always less than b so it is always true and infiite loop occurs.