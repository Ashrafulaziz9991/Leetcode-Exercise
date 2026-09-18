// problem link : https://leetcode.com/problems/find-triangular-sum-of-an-array/


class Solution {
public:
    int digit_count(int n) {
        int cnt = 0;
        while (n > 0) {
            int digit = n % 10;
            cnt++;
            n /= 10;
        }
        return cnt;
    }

    int triangularSum(vector<int>& nums) {
        vector<int> ans;
        if (nums.size() == 1)
            return nums[0];
        for (int i = 0; i < nums.size() - 1; i++) {
            int sum = 0;
            sum = nums[i] + nums[i + 1];
            if (digit_count(sum) > 1)
                ans.push_back(sum % 10);
            else
                ans.push_back(sum);
        }
        if (ans.size() == 1)
            return ans[0];
        else
            return triangularSum(ans);
    }
    
};