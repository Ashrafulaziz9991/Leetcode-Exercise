// problem link : https://leetcode.com/problems/sum-of-unique-elements/description/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        for(int i : nums){
            int x = count(nums.begin(), nums.end(), i);
            if(x == 1)
                sum += i;
        }
        return sum;
    }
};