// problem link : https://leetcode.com/problems/monotonic-array/

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> a = nums;
        sort(nums.begin(), nums.end());
        vector<int> b = nums;
        sort(nums.begin(), nums.end(), greater<int>());
        return a == b || a == nums;
    }
};