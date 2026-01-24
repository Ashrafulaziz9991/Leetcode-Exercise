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

    vector<int>nums = {3,1,2,4}, ans, odd;

    for(int i : nums){
        if(i % 2 == 0){
            ans.push_back(i);
        }
        if(i % 2 != 0)
            odd.push_back(i);
    }

    for(int i : ans) cout << i << " ";
    cout << endl;
    for(int i : odd) cout << i << " ";

    for(int i : odd) ans.push_back(i);

    cout << endl;
    for(int i : ans) cout << i << " ";
    return 0;
}

*/


// problem link : https://leetcode.com/problems/sort-array-by-parity/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans, odd;

        for (int i : nums) {
            if (i % 2 == 0) {
                ans.push_back(i);
            }
            if (i % 2 != 0)
                odd.push_back(i);
        }
        for (int i : odd)
            ans.push_back(i);

        return ans;
    }
};