// problem link : https://leetcode.com/problems/reverse-vowels-of-a-string/

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str = "IceCreAm", str2 = "";
    stack<char>vowel;
    for (char c : str)
    {
        if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
            vowel.push(c);
    }

    for (char &c : str)
    {
        if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u'){
            c = vowel.top();
            vowel.pop();
        }
    }
    cout << str;

    return 0;
}
*/

/*
{
            int strt = 0, endd = str.size() - 1;

            while (strt < endd)
            {
                char temp = str[strt];
                str[strt] = str[endd];
                str[endd] = temp;
                strt++;
                endd--;
            }
        }
*/

class Solution {
public:
    string reverseVowels(string s) {
        stack<char> vowel;
        for (char c : s) {
            if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' ||
                c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
                vowel.push(c);
        }

        for (char& c : s) {
            if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' ||
                c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u') {
                c = vowel.top();
                vowel.pop();
            }
        }
        return s;
    }
};