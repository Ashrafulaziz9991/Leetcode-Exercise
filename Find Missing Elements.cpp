// problem link : https://leetcode.com/problems/find-missing-elements/description/


class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        unordered_set<int>ust(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        for(int i = mn; i <= mx; i++)
            if(!ust.count(i))
                ans.push_back(i);
        return ans;
    }
};