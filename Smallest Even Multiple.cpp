// problem link :  https://leetcode.com/problems/smallest-even-multiple/

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n % 2 != 0)
            return n*2;
        return n;
    }
};