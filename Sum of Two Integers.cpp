// problem link : https://leetcode.com/problems/sum-of-two-integers/

class Solution {
public:
    int getSum(int a, int b) {
        while(a != 0){
            int carry = a & b;
            b = b ^ a;
            a = carry << 1;
        }
        return b;
    }
};