// problem link : https://leetcode.com/problems/set-mismatch/
/**
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>
#include <cstring>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>nums = {3,2,3,4,6,5}, ans, nums2;
    unordered_map<int, int>ump;

    for(int i = 1; i <= nums.size(); i++) ump[i]++;
    
    for(auto i : nums) ump[i]--;

    for(auto i : ump){
        if(i.second == -1) ans.push_back(i.first);
        if(i.second == 1) ans.push_back(i.first);
    }

    // unordered_set<int>seen;
    // int sum = 0, d = 0;
    // for(int i : nums) sum+=i;
    // int n = *max_element(nums.begin(), nums.end());
    // int expectedSum = n * (n+1)/2;
    // int d = abs(expectedSum - sum);
    // ans.push_back(d);

    // for (int i = 0; i < nums.size(); i++) {
    //     if (seen.find(nums[i]) != seen.end()) {
    //         // ans.push_back(nums[i]);
    //         ans.push_back(i);
    //     } else {
    //         seen.insert(nums[i]);
    //     }
    // }
    for(int i : ans) cout << i << " ";
    return 0;
}

*/



class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> ump;
        for (int i = 1; i <= n; i++)
            ump[i]++;

        for (auto i : nums)
            ump[i]--;
        int duplicate  = 0, missing = 0;
        for (auto i : ump) {
            if (i.second == -1)
                duplicate = i.first;
            if (i.second == 1)
                missing = i.first;
        }
        return {duplicate, missing};
    }
};