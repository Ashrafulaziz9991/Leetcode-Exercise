// problem link : https://leetcode.com/problems/remove-duplicate-letters/description/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s = "cbacdcbc", ans = "";
    // unordered_set<char, int>ump;
    // for(char &c : s) ump[c]++;
    // for(auto i : ump){
    //     if(i.second == 1)
    //         ans+=i.first;
    // }

    // we'll use priority queue including pair like ascending pair

    set<int> uniqueSet(s.begin(), s.end());
        s.assign(uniqueSet.begin(), uniqueSet.end());
    cout << s;
    return 0;
}