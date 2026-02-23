/**
 *
 * problem link: https://leetcode.com/problems/find-all-duplicates-in-an-array/ 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {1,1,2}, ans;
    unordered_map<int, int>ump;
    for(int &i : nums) ump[i]++;

    for(auto &i : ump){
        if(i.second > 1)
            ans.push_back(i.first);
    }

    for(int &i : ans) cout << i << " ";
    return 0;
}
*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> ump;
        for (int& i : nums)
            ump[i]++;

        for (auto& i : ump) {
            if (i.second > 1)
                ans.push_back(i.first);
        }
        return ans;
    }
};