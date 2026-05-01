// problem link : https://leetcode.com/problems/reverse-string-ii/

#include <bits/stdc++.h>
using namespace std;

string rev(string s){

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s = "abcdfdjkf";
    int k = 4;
    // s.erase(s.begin(), s.end(), + 2);
    // for(int i = 0; i<k; i++)
    //     s.substr(s[i]);

    reverse(s.begin(), s.begin() + k);
    reverse(s.end(), s.end() + k);
    cout << s;
    return 0;
}