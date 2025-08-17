/*
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> retvec;
        for(int i = 0; i<nums.size(); i++)
        {
            for(int j = i+1; j<nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    retvec.push_back(i);
                    retvec.push_back(j);
                    return retvec;
                }
            }
        }
        return retvec;
    }

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v = {2,7,11,15}, v2;
    int terget = 9;

    v2 = twoSum(v, 9);
    for (auto &&i : v2)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> retvec;
        for(int i = 0; i<nums.size(); i++)
        {
            for(int j = i+1; j<nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    retvec.push_back(i);
                    retvec.push_back(j);
                    return retvec;
                }
            }
        }
        return retvec;
    }
};