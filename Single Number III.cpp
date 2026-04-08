// problem link : https://leetcode.com/problems/single-number-iii/


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int>freq;
        for(int i : nums) freq[i]++;
        vector<int>ans;
        for(auto[k,v] : freq)
            if(v == 1)
                ans.push_back(k);
        return ans;
    }
};