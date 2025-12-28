
/*
#include <bits/stdc++.h>
using namespace std;

bool Is_isomorophic(string s, string t){
    unordered_map<char, int>m, m2;
    for (int i = 0; i < s.size(); i++)
    {
        if(m.find(s[i]) == m.end())
            m[s[i]] = i;
        if(m2.find(t[i]) == m2.end())
            m2[t[i]] = i;
        if(m[s[i]] != m2[t[i]]) return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s1 = "aab", s2 = "xbg";
    cout << Is_isomorophic(s1, s2);
    return 0;
}

*/

// problem link : https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> m, m2;
        for (int i = 0; i < s.size(); i++) {
            if (m.find(s[i]) == m.end())
                m[s[i]] = i;
            if (m2.find(t[i]) == m2.end())
                m2[t[i]] = i;
            if (m[s[i]] != m2[t[i]])
                return false;
        }
        return true;
    }
};