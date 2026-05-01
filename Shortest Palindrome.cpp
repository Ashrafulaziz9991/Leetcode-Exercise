#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string s){
    int l = 0, r = s.size() - 1;
    while (l < r)
        if(s[l++] != s[r--]) return false;
    return true;
}

// abcd, aacecaaa

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s = "aacecaaa", ans;
    stack<char>st;
    for(char &c : s) st.push(c);
    // cout << ispalindrome("aba");

    string temp = "";
    while (!st.empty())
    {
        char letter = st.top();
        st.pop();        
        temp +=letter;
        if(ispalindrome(temp + s)){
            ans = temp + s;
            break;
        }
    }
    cout << ans;
    return 0;
}