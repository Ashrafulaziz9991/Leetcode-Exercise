/**
//  * 
//  * problem link : https://leetcode.com/problems/minimum-common-value/

#include <bits/stdc++.h>
using namespace std;

vector<int> is_common(vector<int>&x, vector<int>&y){
    unordered_set<int>ust(y.begin(), y.end());
    vector<int>res;
    for(int &i : x)
        if(ust.find(i) != ust.end())
            res.push_back(i);
    if(res.empty()) return {-1};
    else return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums1 = {1,2,3,6}, nums2 = {2,3,4,5};

    auto temp = [](vector<int> &x, vector<int> &y)
    {
        unordered_set<int> ust(y.begin(), y.end());
        vector<int> res;
        for (int &i : x)
            if (ust.find(i) != ust.end())
                res.push_back(i);
        if (res.empty())
            return {-1};
        else
            return res;
    }

    // vector<int>ans = is_common(nums1, nums2);
    vector<int>ans = temp(nums1, nums2);
    int mn = *min_element(ans.begin(), ans.end());
    cout << mn;
    return 0;
}



*/



class Solution {
public:
    vector<int> is_common(vector<int>& x, vector<int>& y) {
        unordered_set<int> ust(y.begin(), y.end());
        vector<int> res;
        for (int& i : x)
            if (ust.find(i) != ust.end())
                res.push_back(i);
        if (res.empty())
            return {-1};
        else
            return res;
    }

    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans = is_common(nums1, nums2);
        int mn = *min_element(ans.begin(), ans.end());
        return mn;
    }
};