/*Given n strings consisting of lowercase
English alphabets. Print the character that is
occurring most number of times.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s;
    int count;
    cout << "Enter the string in lowercase characters" << endl;
    cin >> (s);

    vector<int> freq(26, 0);

    for (int i = 0; i < s.length(); i++)
    {

        freq[s[i] - 'a']++;
    }

    int maxfreq = 0;
    char maxchar = 'a';
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxfreq)
        {
            maxfreq = freq[i];
            maxchar = 'a' + i;
        }
    }
    cout << "maximum character " << maxchar << endl;
    cout << "maximum frequency " << maxfreq << endl;

    return 0;
}