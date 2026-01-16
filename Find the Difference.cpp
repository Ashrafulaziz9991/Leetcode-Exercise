// problem link : https://leetcode.com/problems/find-the-difference/description/

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>
// #include <cmath>
// #include <climits>
// #include <cstring>
// #include <queue>
// #include <stack>
// #include <set>
// #include <map>
// #include <unordered_map>
// #include <unordered_set>

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s = "abcd", t = "abcde", ans = "";
    stack<char>st1;
    stack<char>st2;

    for(char c : s) st1.push(c);
    for(char c : t) st2.push(c);
        for(char d : t){
            if(find(s.begin(), s.end(), d) == s.end()){
                // cout << d << endl;
                // break;
                ans.push_back(d);
                break;
            }
        }
    cout << ans;
    return 0;
}

*/


class Solution {
public:
    char findTheDifference(string s, string t) {
        for(char d : t){
            int cnt = count(s.begin(), s.end(), d);
            int cnt2 = count(t.begin(), t.end(), d);

            if(cnt2 > cnt) return d;
        }
        return t[t.size() - 1];
    }
};