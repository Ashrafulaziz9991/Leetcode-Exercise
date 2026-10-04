// https://leetcode.com/problems/integer-break/

class Solution {
public:
    int integerBreak(int n) {
        if(n <= 3) return n - 1;
        int ml = 1;

        while(n > 4){
            ml = ml*3;
            n = n - 3;
        }
        return n*ml;
    }
};