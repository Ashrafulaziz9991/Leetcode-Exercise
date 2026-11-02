// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int j = 0, mx = 0;

        for (int i = 0; i < s.size(); i++) {
            while (seen.count(s[i]))
                seen.erase(s[j++]);

            seen.insert(s[i]);
            mx = max(mx, i - j + 1);
        }
        return mx;
    }
};