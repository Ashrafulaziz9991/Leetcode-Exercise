/**
 * 
 * problem link : https://leetcode.com/problems/rotate-string/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s = "", goal = "";
    if(s == goal) {
        cout << "ok";
        return 0;
    }
    string temp = "";
    return 0;
}

*/


class Solution {
public:
    bool rotateString(string s, string goal) {
        return s.size() == goal.size() &&/* this part checking wheather goal(string/substring) is existing or not into s+s(string)*/ 
        (s+s).find(goal) != string::npos;
    }
};