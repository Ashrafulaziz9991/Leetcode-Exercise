// https://leetcode.com/problems/find-first-palindromic-string-in-the-array/

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        auto is_palindome = [](string s){
            string tmp = s;
            reverse(tmp.begin(), tmp.end());
            return s == tmp;
        };

        for(const auto& s : words)
            if(is_palindome(s))
                return s;
        return "";
    }
};