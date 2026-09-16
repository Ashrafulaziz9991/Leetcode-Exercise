// problem link : https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/

class Solution {
public:
    int countElements(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        int cnt = 0;
        for(int i : nums)
            if(i > mn && i < mx)
                cnt++;
        return cnt;
    }
};