// problem link : https://leetcode.com/problems/check-if-the-sentence-is-pangram/


class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int>freq;
        for(char c : sentence) freq[c]++;
        return freq.size() == 26;
    }
};