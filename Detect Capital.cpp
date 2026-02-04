/**
 * problem link : https://leetcode.com/problems/detect-capital/

#include <bits/stdc++.h>
using namespace std;

bool check_al_capital(string s){
    int count = 0;
    for(auto &c : s){
        if(isupper(c))
            count++;
    }
    return count == s.size();
}

bool check_al_small(string s){
    int count = 0;
    for(auto &c : s){
        if(islower(c))
            count++;
    }
    return count == s.size();
}
bool check_is_standard(string s) {
    if (!isupper(s[0])) return false;

    for (int i = 1; i < s.size(); i++) {
        if (!islower(s[i]))
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;

    if(check_al_capital(s)) cout << "yes";
    else if(check_al_small(s)) cout << "yes";
    else if(check_is_standard(s)) cout << "yes";
    else cout << "NO";
    return 0;
}

*/

// solution : 1

class Solution {
public:
    bool check_al_capital(string s) {
        int count = 0;
        for (auto& c : s) {
            if (isupper(c))
                count++;
        }
        return count == s.size();
    }

    bool check_al_small(string s) {
        int count = 0;
        for (auto& c : s) {
            if (islower(c))
                count++;
        }
        return count == s.size();
    }
    bool check_standard(string s) {
        if (!isupper(s[0]))
            return false;
        for (int i = 1; i < s.size(); i++) {
            if (!islower(s[i]))
                return false;
        }
        return true;
    }

    bool detectCapitalUse(string word) {
        return check_al_capital(word) || check_al_small(word) ||
               check_standard(word);
    }
};


// solution : 2


class Solution {
public:
    bool detectCapitalUse(string word) {
        int upcount = 0;
        for(char &c : word){
            if(isupper(c))
                upcount++;
        }
        return upcount == word.size() || upcount == 0 || upcount == 1 && isupper(word[0]);
    }
};
