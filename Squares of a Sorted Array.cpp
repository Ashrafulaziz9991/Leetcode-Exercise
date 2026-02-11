/**
 * problem link : https://leetcode.com/problems/squares-of-a-sorted-array/
 * 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {-4,-1,0,3,10};
    sort(nums.begin(), nums.end());
    for(int &i : nums) i = pow(i, 2);
    for(int &i : nums) cout << i << " ";
    // int n = -4;
    // cout << pow(n,2);
    return 0;
}

*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int &i : nums) i = pow(i, 2);
        sort(nums.begin(), nums.end());
        return nums;
    }
};