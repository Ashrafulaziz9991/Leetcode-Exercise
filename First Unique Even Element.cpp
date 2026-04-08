// problem link : https://leetcode.com/problems/first-unique-even-element/


class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int, int>freq;
        for(int i : nums)
            freq[i]++;
        int t;
        for(int i : nums){
            if(i % 2 == 0 && freq[i] == 1)
                return i;
        }
        return -1;
    }
};