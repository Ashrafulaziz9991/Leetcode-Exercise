// https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num = 0, num2 = 0;
        for(int i = 1; i <= n; i++)
            if(i % m != 0)
                num += i;
        for(int i = 1; i <= n; i++)
            if(i % m == 0)
                num2 += i;
        return (num - num2);
    }
};