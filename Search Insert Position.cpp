// problem link : https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high = nums.size() - 1, low = 0;
        while (low <= high) {
            // the "mid" VARIABLE which should be decleared in the while loops's scope
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};