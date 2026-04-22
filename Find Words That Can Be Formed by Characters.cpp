// problem link : https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/description/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string> words = {"cat", "bt", "hat", "tree"};
    string chars = "atach", tst = "tree", ans = "";

    // for (auto i : tst){
    //     if (find(chars.begin(), chars.end(), i) == chars.end())
    //     {
    //         cout << "NO";
    //         return 0;
    //     }
    // }


    // for(auto i : words){
    //     bool flag = false;
    //     for(auto j : i){
    //         if (find(chars.begin(), chars.end(), j) == chars.end())
    //         {
    //             flag = true;
    //             break;;
    //         }
    //     }
    //     if(!flag)
    //         ans += i;
    // }

    vector<int>cnt(26, 0);

    for(char c : chars){
        cnt[c - 'a']++;
    }

    for(int i : cnt) cout << i << " ";



    // cout << "YES";
    // cout << ans;
    return 0;
}