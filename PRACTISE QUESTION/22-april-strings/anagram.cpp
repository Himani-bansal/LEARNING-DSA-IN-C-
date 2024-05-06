#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    string s;
    string t;

    vector<int> freq(26, 0);

    cout << "enter first string" << endl;
    cin >> s;
    cout << "enter second string" << endl;
    cin >> t;

    if (s.length() != t.length())

    {
        cout << "Both strings are not anagram";
        return false;
    }

    for (int i = 0; i < s.length(); i++)
    {

        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            cout << "Not anagram";
            return 0;
        }
    }
    cout << "They are anagram";
    return 0;
}
