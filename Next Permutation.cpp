// problem link : https://leetcode.com/problems/next-permutation/
/*
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

    vector<int> nums = {1,1,5};
    // sort(nums.begin(), nums.end());
    next_permutation(nums.begin(), nums.end()); // Now nums is the second permutation
    for (int i : nums)
        cout << i << " ";
    return 0;
}

*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),
                         nums.end()); // Now nums is the second permutation
        for (int i : nums)
            cout << i << " ";
    }
};