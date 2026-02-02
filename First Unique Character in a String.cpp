// problem link : https://leetcode.com/problems/first-unique-character-in-a-string/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;

    unordered_map<char, int>mp;

    for(char &i : s) mp[i]++;

    for (int i = 0; i < s.size(); i++)
    {
        if(mp[s[i]] == 1){
            cout << i << endl;
            // return 0;
        }
    }
    
    cout << -1;
    return 0;
}

*/


class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        for (char& i : s)
            mp[i]++;

        for (int i = 0; i < s.size(); i++) {
            if (mp[s[i]] == 1)
                return i;
        }
        return-1;
    }
};