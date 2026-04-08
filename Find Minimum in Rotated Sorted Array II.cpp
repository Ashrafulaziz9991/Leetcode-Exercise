// problem link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
// the problem has requerd O(log n), but we did it in O(n), we'll make that later


class Solution {
public:
    int findMin(vector<int>& nums) {
        int mn = nums[0];
        for(int i : nums)
            if(i < mn)
                mn = i;
        return mn;
    }
};