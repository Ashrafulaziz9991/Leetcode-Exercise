// https://leetcode.com/problems/richest-customer-wealth/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx = 0;
        for(vector<int>&i : accounts){
            int sum = 0;
            for(int j : i)
                sum += j;
            mx = max(sum, mx);
        }
        return mx;
    }
};