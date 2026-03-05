// problem link : https://leetcode.com/problems/reverse-words-in-a-string/description/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s = "a good   example";
    vector<string>v;

    // it's a process to insert/push each segment / word into vector<string>...
    stringstream ss(s);
    string word;
    while (ss >> word)
        v.push_back(word);
    reverse(v.begin(), v.end());

    s.clear();
    for(const auto& a : v){
        s += a;
        s += " ";
    } 

    cout << s;
    
    
    return 0;
}
*/


class Solution{
public:
    string reverseWords(string s){
        vector<string> v;
        // it's a process to insert/push each segment / word into vector<string>...
        stringstream ss(s);
        string word;
        while (ss >> word)
            v.push_back(word);
        reverse(v.begin(), v.end());

        s.clear();
        for (const auto &a : v)
        {
            s += a;
            s += " ";
        }
        s.pop_back();
        return s;
    }
};