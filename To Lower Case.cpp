/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s = "HELLO";

    for(char &c : s)
    {
        char x = c;
        c = tolower(x);
    }
    cout << s;
    return 0;
}

*/

// problem link : https://leetcode.com/problems/to-lower-case/?envType=problem-list-v2&envId=string

class Solution {
public:
    string toLowerCase(string s) {
        for (char& c : s) {
            char x = c;
            c = tolower(x);
        }
        return s;
    }
};