// problem link : https://leetcode.com/problems/find-all-lonely-numbers-in-the-array/


// solution : 1

class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        unordered_set<int>ust(nums.begin(), nums.end());
        unordered_map<int, int>freq;
        for(int i : nums) freq[i]++;
        vector<int>ans;

        for(int i : ust){
            if(freq[i] == 1 && !ust.count(i + 1) && !ust.count(i - 1))
                ans.push_back(i);
        }
        return ans;
    }
};


// solution : 2

class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        unordered_map<int, int>freq;
        for(int i : nums) freq[i]++;
        vector<int>ans;

        // this is also correct way 
        for(int i : nums){
            if(freq[i] == 1 && freq[i + 1] == 0 && freq[i - 1] == 0)
                ans.push_back(i);
        }
        return ans;
    }
};