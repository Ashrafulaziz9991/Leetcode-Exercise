/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x;cin>>x;
    string str = to_string(x);
    string str2 = str;
    reverse(str.begin(), str.end());

    if (str == str2)
        cout<<"Yes";
    else
        cout<<"NO";
    return 0;
}

*/


class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string str2 = str;
        reverse(str.begin(), str.end());

        if (str == str2)
            return true;
        else
            return false;
    }
};
