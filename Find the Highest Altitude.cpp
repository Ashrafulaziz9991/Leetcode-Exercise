// https://leetcode.com/problems/find-the-highest-altitude/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0, mx = 0;
        for(int i : gain){
            sum += i;
            mx = max(sum, mx);
        }
        return mx;
    }
};