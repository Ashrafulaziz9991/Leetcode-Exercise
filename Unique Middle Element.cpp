// problem link : https://leetcode.com/problems/unique-middle-element/description/

class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int, int>freq;
        for(int i : nums)
            freq[i]++;
        int mid = nums.size()/2;
        return freq[nums[mid]] == 1;
    }
};