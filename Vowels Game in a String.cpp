// problem link https://leetcode.com/problems/vowels-game-in-a-string/description/?envType=daily-question&envId=2025-09-12

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    string s;
    cin >> s;

    int count_vowel = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count_vowel++;
        }
    }

    cout << count_vowel << "\n";
    return 0;
}