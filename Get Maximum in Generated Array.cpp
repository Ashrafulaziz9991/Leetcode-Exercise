// problem link : https://leetcode.com/problems/get-maximum-in-generated-array/

class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> nums(n + 1);

        nums[0] = 0;
        if (n >= 1) nums[1] = 1;
        for (int i = 2; i <= n; i++)
            i % 2 == 0 ? nums[i] = nums[i / 2]
                       : nums[i] = nums[i / 2] + nums[i / 2 + 1];
        int mx = *max_element(nums.begin(), nums.end());
        return mx;
    }
};