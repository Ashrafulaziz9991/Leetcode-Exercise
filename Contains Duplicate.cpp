// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     unordered_map
    
//     return 0;
// }

// problem_link : https://leetcode.com/problems/contains-duplicate/description/?envType=problem-list-v2&envId=sorting

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // set<int>dist;
        // for(int i : nums) dist.insert(i);
        // if(dist.size() != nums.size())
        //     return true;
        // return false;

        sort(nums.begin(), nums.end());
        for(int x = 0; x < nums.size() - 1; x++){
            if(nums[x] == nums[x+1])
                return true;
        }
        return false;

        // unordered_map<int, int> um;
        // for(auto i : nums)
        //     um[i]++;
        
        // for(auto i : um){
        //     if(i.second > 1)
        //         return true;
        // }
        // return false;
    }
};