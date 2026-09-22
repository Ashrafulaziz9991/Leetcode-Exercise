// problem link : https://leetcode.com/problems/maximum-product-of-two-digits/

class Solution {
public:
    int maxProduct(int n) {
        vector<int>nums;
        while (n > 0) {
            int digit = n % 10;
            nums.push_back(digit);
            n /= 10;
        }
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[0] * nums[1];
    }
};