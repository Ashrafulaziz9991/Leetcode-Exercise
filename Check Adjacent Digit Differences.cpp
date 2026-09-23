// problem link : https://leetcode.com/problems/check-adjacent-digit-differences/

class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i = 0; i < s.size() - 1; i++){
            int x = s[i] - '0', y = s[i + 1] - '0';
            int diff = abs(x - y);
            if(diff > 2) return false;
        }
        return true;
    }
};