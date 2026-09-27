// problem link : https://leetcode.com/problems/smallest-divisible-digit-product-i/

class Solution {
public:
    int smallestNumber(int n, int t) {
        auto it = [](int n) {
            int product = 1;
            while (n > 0) {
                int d = n % 10;
                product *= d;
                n /= 10;
            }
            return product;
        };

        for (int i = n; i <= n + 10; i++)
            if (it(i) % t == 0)
                return i;
        return -1;
    }
};