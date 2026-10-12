// problem link : https://leetcode.com/problems/is-subsequence/description/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        for(auto c : t)
            if(i < s.size() && s[i] == c)
                i++;
        return i == s.size();
    }
};