// problem link : https://leetcode.com/problems/complement-of-base-10-integer/


class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        if(n == 1) return 0;
        int res = 0, count = 0;
        while(n > 0){
            if(n % 2 == 0)
                res += pow(2, count);
            count++;
            n /= 2;
        }
        return res;
    }
};