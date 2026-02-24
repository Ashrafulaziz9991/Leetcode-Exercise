// problem link : https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int>ump;
        for(int i : nums) ump[i]++;
        for(auto i : ump){
            if(i.second > 1)
                return i.first;
        }
        return -1;
    }
};