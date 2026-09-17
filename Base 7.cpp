// problem link : https://leetcode.com/problems/base-7/description/

class Solution {
public:
    string convertToBase7(int num) {
        int rem, i = 1, kth = 0;
        while(num != 0){
            rem = num % 7;
            num /= 7;
            kth += rem * i;
            i *= 10;
        }
        string str = to_string(kth);
        return str;
    }
};