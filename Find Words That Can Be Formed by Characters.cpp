// problem link : https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/description/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string> words = {"cat", "bt", "hat", "tree"};
    string chars = "atach", tst = "tree", ans = "";

   

    vector<int>cnt(26, 0);

    for(char c : chars){
        cnt[c - 'a']++;
    }

    for(int i : cnt) cout << i << " ";

    // cout << "YES";
    // cout << ans;
    return 0;
}

*/

class Solution {
public:
    bool is_exist(string str, string a) {
        for (char c : a) {
            auto pos = str.find(c);
            if (pos == string::npos)
                return false;
            str.erase(pos, 1);
        }
        return true;
    }

    int countCharacters(vector<string>& words, string chars) {
        int sum = 0;

        for (auto s : words) {
            if (is_exist(chars, s))
                sum += s.size();
        }
        return sum;
    }
};