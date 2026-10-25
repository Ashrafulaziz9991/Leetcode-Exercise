// https://leetcode.com/problems/binary-digit-score/description/

class Solution {
public:
    int calculateScore(int a, int b) {
        auto Binary_sum = [](int n){
            long long bin = 0;
            int rem, i = 1;
            while(n != 0){
                rem = n % 2;
                n /= 2;
                bin += rem * i;
            }
            int sum = 0;

            while(bin > 0){
                int d = bin % 10;
                sum += d;
                bin /= 10;
            }
            return sum;
        };
        int s1 = Binary_sum(a);
        int s2 = Binary_sum(b);

        if(s1 >= s2)
            return s1* s2;
        return s2 / s1;
    }
};