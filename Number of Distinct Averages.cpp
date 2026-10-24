// https://leetcode.com/problems/number-of-distinct-averages/

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        sort(nums.begin(), nums.end());

        set<float> st;

        while (i < j) {
            float avg = (nums[i] + nums[j]) / 2.0;
            st.insert(avg);
            i++;
            j--;
        }
        return st.size();
    }
};