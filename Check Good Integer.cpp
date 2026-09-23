// problem link : https://leetcode.com/problems/check-good-integer/

class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum = 0;
        int squareSum = 0;

        while(n > 0){
            int digit = n % 10;
            digitSum += digit;
            squareSum += pow(digit, 2);
            n /= 10;
        }
        return squareSum - digitSum >= 50;
    }
};