// link : 

class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int peak = 0, valleys = 0, n = nums.size();

        for (int i = 1; i < n - 1; i++) {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
                peak += nums[i];
            if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1])
                valleys += nums[i];
        }
        return peak - valleys;
    }
};