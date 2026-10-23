// https://leetcode.com/problems/minimize-string-length/description/

// sol : 1
class Solution {
public:
    int minimizedStringLength(string s) {
        set<char>st;
        for(auto c : s) st.insert(c);
        return st.size();
    }
};

// sol : 2

class Solution {
public:
    int minimizedStringLength(string s) {
        set<char>st(s.begin(), s.end());
        return st.size();
    }
};