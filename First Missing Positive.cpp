// problem link : https://leetcode.com/problems/first-missing-positive/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>ust(nums.begin(), nums.end());
        int n = nums.size() + 1;
        for(int i = 1; i <= n; i++)
            if(!ust.count(i))
                return i;
        return -1;
    }
};