// problem link : https://leetcode.com/problems/reverse-only-letters/


/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    stack<char>st;
    for(auto &letter : s){
        if(letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z')
            st.push(letter);
    }
    for (char &l : s)
    {
        if(l >= 'a' && l <= 'z' || l >= 'A' && l <= 'Z')
        {
            l = st.top();
            st.pop();
        }
    }
    cout << s << endl;
    return 0;
}

*/


class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char> st;
        for (char& letter : s) {
            if (letter >= 'a' && letter <= 'z' ||
                letter >= 'A' && letter <= 'Z')
                st.push(letter);
        }
        for (char& l : s) {
            if (l >= 'a' && l <= 'z' || l >= 'A' && l <= 'Z') {
                l = st.top();
                st.pop();
            }
        }
        return s;
    }
};