// problem link : https://leetcode.com/problems/valid-palindrome/description/?envType=problem-list-v2&envId=string

/** 
 * Uppercase A-Z: 65-90
 * Lowercase a-z: 97-122  
 * 
*/

/*

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s, str2, ans;
    getline(cin, s);

    cout << s << endl;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9'){
            str2.push_back(s[i]);
        }
    }
    for(char &c : str2) c = std::tolower(c);

    // transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    
    cout << str2 << endl;
    ans = str2;
    reverse(str2.begin(), str2.end());
    if(str2.size() == 1) cout << "NO" << endl;
    else if(ans == str2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

*/

// sol 1

/*
class Solution {
public:
    bool isPalindrome(string s) {
        string str2, ans;
        for (int i = 0; i < s.size(); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9'){
            str2.push_back(s[i]);
        }
        }
        for (char& c : str2)
            c = std::tolower(c);
        ans = str2;
        reverse(str2.begin(), str2.end());
        // if(s.size() == 1) return true;
        // else if(ans.size() == 1) return false;
        if (ans == str2)
            return true;
        else
            return false;
    }
};
*/
// sol 2


class Solution {
public:
    bool isPalindrome(string s) {
        string str2, ans;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' ||
                s[i] >= '0' && s[i] <= '9') {
                str2.push_back(s[i]);
            }
        }
        for (char& c : str2)
            c = std::tolower(c);
        ans = str2;
        int start = 0, endd = str2.size() - 1;
        while (start < endd) {
            char temp = str2[start];
            str2[start] = str2[endd];
            str2[endd] = temp;
            start++, endd--;
        }
        if (ans == str2)
            return true;
        else
            return false;
    }
};

