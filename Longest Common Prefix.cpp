
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<string> strs = {"flower","flow","flight"};
    string str = "";

    for (size_t i = 0; i < strs[0].size(); i++)
    {
        char c = strs[0][i];
        bool match = true;
        for (size_t j = 1; j < strs.size(); j++)
        {
            if(i >= strs[j].size() || strs[j][i] != c){
                match = false;
                break;
            }
        }
        if(match) str.push_back(c);
        else break;

    }

    cout << str;
    
    return 0;
}

*/

// problem link: https://leetcode.com/problems/longest-common-prefix/description/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = "";

        for (size_t i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i];
            bool match = true;
            for (size_t j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || strs[j][i] != c) {
                    match = false;
                    break;
                }
            }
            if (match)
                str.push_back(c);
            else
                break;
        }
        return str;
    }
};