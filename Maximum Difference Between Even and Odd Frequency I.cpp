// https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/description/

class Solution {
public:
    int maxDifference(string s) {
        int mx_e = INT_MIN;
        int mx_o = INT_MIN;
        int mn_e = INT_MAX;
        int mn_o = INT_MAX;
        unordered_map<char, int> freq;
        for (char c : s)
            freq[c]++;

        for (auto& [k, v] : freq) {

            if (v % 2 == 0) {
                mx_e = max(mx_e, v);
                mn_e = min(mn_e, v);
            } else {
                mx_o = max(mx_o, v);
                mn_o = min(mn_o, v);
            }
        }

        int mx = ((mx_e - mn_o), (mx_o - mn_e));

        return mx;
    }
};