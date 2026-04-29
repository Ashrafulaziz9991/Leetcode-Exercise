// problem link : https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int>freq;
        for(char &c : s)
            freq[c]++;
        for(int i = 0; i < s.size() - 1; i++)
            if(freq[s[i]] != freq[s[i + 1]])
                return false;
        return true;
    }
};