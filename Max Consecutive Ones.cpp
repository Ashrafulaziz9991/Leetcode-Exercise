/**
 * problem link : https://leetcode.com/problems/max-consecutive-ones/
 *  
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {1,1,0,1,1,1};
    int cnt = 0, mx = INT_MIN;

    for(int i : nums){
        if(i == 1)
            cnt++;
        else
            cnt = 0;
        
        mx = max(mx, cnt);
    }

    cout << mx;
    return 0;
}
*/


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, mx = INT_MIN;

        for (int i : nums) {
            if (i == 1)
                cnt++;
            else
                cnt = 0;
            mx = max(mx, cnt);
        }
        return mx;
    }
};