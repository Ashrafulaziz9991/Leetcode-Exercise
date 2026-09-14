// problem link : // problem link : https://leetcode.com/problems/sum-of-digits-in-base-k/description/
class Solution {
public:
    int sumBase(int n, int k) {
        long long kt = 0;
        int rem, i = 1, sum = 0;
        while (n != 0) {
            rem = n % k;
            n /= k;
            kt += rem * i;
            i *= 10;
        }
        while (kt > 0) {
            int digit = kt % 10;
            sum += digit;
            kt /= 10;
        }
        return sum;
    }
};


// solution : 2

class Solution {
public:
    int sumBase(int n, int k) {
        long long kt = 0;
        int rem, i = 1, sum = 0;
        while (n != 0) {
            rem = n % k;
            n /= k;
            kt += rem * i;
            sum += rem;
            i *= 10;
        }
        return sum;
    }
};