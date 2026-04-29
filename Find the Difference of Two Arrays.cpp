// link : https://leetcode.com/problems/find-the-difference-of-two-arrays/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // vector<int> nums1 = {1, 2, 3, 3};
    // vector<int> nums2 = {1, 1, 2, 2};

    // unordered_set<int>ust(nums1.begin(), nums1.end());
    // unordered_set<int>ust2(nums2.begin(), nums2.end());

    // vector<vector<int>> ans;
    // vector<int> tmp;
    // set<int> st;
    // for (int i : nums1)
    // {
    //     if (find(nums2.begin(), nums2.end(), i) == nums2.end())
    //     {
    //         st.insert(i);
    //     }
    // }

    // if (st.empty())
    //     ans.push_back({});
    // else
    // {
    //     tmp.assign(st.begin(), st.end());
    //     ans.push_back(tmp);
    // }

    // st.clear();
    // tmp.clear();
    // vector<int> tmp2;
    // for (int i : nums2)
    // {
    //     if (find(nums1.begin(), nums1.end(), i) == nums1.end())
    //     {
    //         st.insert(i);
    //     }
    // }

    // if (st.empty())
    //     ans.push_back({});
    // else
    // {
    //     tmp.assign(st.begin(), st.end());
    //     ans.push_back(tmp);
    // }

    vector<int> nums1 = {1, 2, 3, 3};
    vector<int> nums2 = {1, 1, 2, 2};

    unordered_set<int>ust(nums1.begin(), nums1.end());
    unordered_set<int>ust2(nums2.begin(), nums2.end());

    vector<vector<int>> ans;

    vector<int>tmp;

    for (int i : nums2)
    {
        if (find(nums1.begin(), nums1.end(), i) == nums1.end())
        {
            tmp.push_back(i);
        }
    }

    if(!tmp.empty())
        ans.push_back(tmp);
    else
        ans.push_back({});

    tmp.clear();

    // vector<int> tmp2;
    for (int i : nums2)
    {
        if (find(nums1.begin(), nums1.end(), i) == nums1.end())
        {
            tmp.push_back(i);
        }
    }

    if(!tmp.empty())
        ans.push_back(tmp);
    else
        ans.push_back({});
    
    // cout << ans.size()<<endl;

    
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

*/


class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int> tmp;
        set<int> st;
        for (int i : nums1) {
            if (find(nums2.begin(), nums2.end(), i) == nums2.end()) {
                st.insert(i);
            }
        }

        if (st.empty())
            ans.push_back({});
        else {
            tmp.assign(st.begin(), st.end());
            ans.push_back(tmp);
        }

        st.clear();
        tmp.clear();

        for (int i : nums2) {
            if (find(nums1.begin(), nums1.end(), i) == nums1.end()) {
                st.insert(i);
            }
        }

        if (st.empty())
            ans.push_back({});
        else {
            tmp.assign(st.begin(), st.end());
            ans.push_back(tmp);
        }
        return ans;
    }
};