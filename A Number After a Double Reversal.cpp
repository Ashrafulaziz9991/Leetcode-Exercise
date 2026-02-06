// problem link : https://leetcode.com/problems/a-number-after-a-double-reversal/

// solution : 1

class Solution {
public:

    int reverse(int x) {
        long long num = 0;
        while(x != 0){
            int digit = x % 10;
            num = num*10 + digit;
            x = x / 10;
        }
        if(num < INT_MIN || num > INT_MAX)
            return 0;
        return (int)num;
    }

    bool isSameAfterReversals(int num) {
        int x = reverse(num);
        int y = reverse(x);
        return num == y;
    }
};

// solution : 2

class Solution {
public:
    bool isSameAfterReversals(int num) {
        return num == 0 || num % 10 != 0;
    }
};