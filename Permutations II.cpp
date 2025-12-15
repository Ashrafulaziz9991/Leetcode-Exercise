// problem link : https://leetcode.com/problems/permutations-ii/submissions/1856481307/?envType=problem-list-v2&envId=sorting

/**
 * permutation the whole charecters in array/vector/string
 * how much way we can decoreted this
 * converted through vector of vector
 */

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // string name  = "AKKAS";
    // sort(name.begin(), name.end());
    // while (next_permutation(name.begin(), name.end()))
    // {
    //     cout << name << endl;
    // }

    vector<int>nums = {2,2,1,1};
    sort(nums.begin(), nums.end());
    vector<vector<int>> N;
    N.push_back(nums);
    sort(nums.begin(), nums.end());

    while (next_permutation(nums.begin(), nums.end()))
    {
        N.push_back(nums);
    }

    for(auto i : N){
        for(auto j : i){
            cout << j <<" ";
        }
        cout << endl;
    }
    
    return 0;
}

*/

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> N;
        N.push_back(nums);
        sort(nums.begin(), nums.end());

        while (next_permutation(nums.begin(), nums.end())) {
            N.push_back(nums);
        }
        return N;
    }
};