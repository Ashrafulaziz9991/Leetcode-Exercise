// problem link : https://leetcode.com/problems/count-the-digits-that-divide-a-number/

class Solution {
public:
    int countDigits(int num) {
        int cnt = 0, orgin = num;
        while (num > 0) {
            int digit = num % 10;
            if (orgin % digit == 0)
                cnt++;
            num /= 10;
        }
        return cnt;
    }
};