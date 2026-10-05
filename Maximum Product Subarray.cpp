// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = nums[0], product = 1;

        for (int i = 0; i < nums.size(); i++) {
            product *= nums[i];
            mx = max(product, mx);
            if (product == 0) {
                product = 1;
            }
        }

        product = 1;

        for (int i = nums.size() - 1; i >= 0; i--) {
            product *= nums[i];
            mx = max(product, mx);
            if (product == 0) {
                product = 1;
            }
        }
        return mx;
    }
};