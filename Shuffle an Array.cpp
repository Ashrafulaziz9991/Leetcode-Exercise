// problem link : https://leetcode.com/problems/shuffle-an-array/


class Solution {
    
public:
    
    vector<int> nums, real;

    Solution(vector<int>& nums) {
        this->nums = nums;
        real = nums;
    }
    
    vector<int> reset() {
        nums = real;
        return nums;
    }
    
    vector<int> shuffle() {
        for (int i = 0; i < nums.size(); i++){
            int j = rand() % (i + 1);
            swap(nums[i], nums[j]);
        }
        return nums;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */