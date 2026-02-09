/**
 * 
 * problem link : https://leetcode.com/problems/unique-morse-code-words/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unordered_map<char, string>ump;
    ump['a'] = ".-";
    ump['b'] = "-...";
    ump['c'] = "-.-.";
    ump['d'] = "-..";
    ump['e'] = ".";
    ump['f'] = "..-.";
    ump['g'] = "--.";
    ump['h'] = "....";
    ump['i'] = "..";
    ump['j'] = ".---";
    ump['k'] = "-.-";
    ump['l'] = ".-..";
    ump['m'] = "--";
    ump['n'] = "-.";
    ump['o'] = "---";
    ump['p'] = ".--.";
    ump['q'] = "--.-";
    ump['r'] = ".-.";
    ump['s'] = "...";
    ump['t'] = "-";
    ump['u'] = "..-";
    ump['v'] = "...-";
    ump['w'] = ".--";
    ump['x'] = "-..-";
    ump['y'] = "-.--";
    ump['z'] = "--..";

    string s = "zen", ans = "";
    set<string>st;
    vector<string>words = {"a"}, vec;
    // for(auto &c : s){
    //     ans += ump[c];
    //     st.insert(ump[c]);
    // }

    for(auto &word : words){
        string x = word, str = "";
        for(auto &c : x){
            str += ump[c];
        }
        st.insert(str);
    }

    // for(auto i : st) cout << i << " ";
    // cout << endl;

    cout << st.size();
    return 0;
}
*/


class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char, string> ump;
        ump['a'] = ".-";
        ump['b'] = "-...";
        ump['c'] = "-.-.";
        ump['d'] = "-..";
        ump['e'] = ".";
        ump['f'] = "..-.";
        ump['g'] = "--.";
        ump['h'] = "....";
        ump['i'] = "..";
        ump['j'] = ".---";
        ump['k'] = "-.-";
        ump['l'] = ".-..";
        ump['m'] = "--";
        ump['n'] = "-.";
        ump['o'] = "---";
        ump['p'] = ".--.";
        ump['q'] = "--.-";
        ump['r'] = ".-.";
        ump['s'] = "...";
        ump['t'] = "-";
        ump['u'] = "..-";
        ump['v'] = "...-";
        ump['w'] = ".--";
        ump['x'] = "-..-";
        ump['y'] = "-.--";
        ump['z'] = "--..";

        string s = "zen", ans = "";
        set<string> st;

        for (auto& word : words) {
            string x = word, str = "";
            for (auto& c : x) {
                str += ump[c];
            }
            st.insert(str);
        }
        return st.size();
    }
};
