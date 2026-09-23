// problem link : https://leetcode.com/problems/reverse-degree-of-a-string/

class Solution {
public:
    int reverseDegree(string s) {
        vector<int> points = {26, 25, 24, 23, 22, 21, 20, 19, 18,
                              17, 16, 15, 14, 13, 12, 11, 10, 9,
                              8,  7,  6,  5,  4,  3,  2,  1};
        int scores = 0;
        for (int i = 0; i < s.size(); i++) {
            char x = s[i];
            scores += points[x - 'a'] * (i + 1);
        }
        return scores;
    }
};