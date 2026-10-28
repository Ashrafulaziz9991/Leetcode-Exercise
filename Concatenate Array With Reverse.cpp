// https://leetcode.com/problems/concatenate-array-with-reverse/


// sol 1 :
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size() - 1;
        while(n != -1)
            nums.push_back(nums[n--]);
        
        return nums;
    }
};

// sol 2 :
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++)
            nums.push_back(nums[n - i - 1]);
        return nums;
    }
};