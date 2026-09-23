// https://leetcode.com/problems/digit-frequency-score/

class Solution {
public:
    int digitFrequencyScore(int n) {
        string str = to_string(n);
        unordered_map<char, int> freq;

        for (char c : str)
            freq[c]++;

        int sum = 0;

        for (auto [k, v] : freq)
            sum += (k-'0') * v;

        return sum;
    }
};