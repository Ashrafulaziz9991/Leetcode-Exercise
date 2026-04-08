// problem link : https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i : nums)
            if(i == target)
                return true;
        return false;
    }
};