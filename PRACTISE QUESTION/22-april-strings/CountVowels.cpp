/*Input a string of length n and count all
the vowels in the given string.*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;
int vowels(const string &str)

{
    int count = 0;
    for (int i = 0; i < str.length(); i++)

    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    cout << "count: " << count << endl;
}

int main()
{
    string str;

    cout << "Enter the string you want to count the vowels" << endl;
    cin >> str;

    vowels(str);
}
