class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0, count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= minK && nums[i] <= maxK) {
                count++;
                ans += count;
            } else
                count = 0;
        }
        return ans;
    }
};