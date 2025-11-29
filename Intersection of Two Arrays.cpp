// problem link : https://leetcode.com/problems/intersection-of-two-arrays/?envType=problem-list-v2&envId=sorting
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> num1 = {4,9,5};
    vector<int> num2 = {9,4,9,8,4}, ans;

    unordered_set<int> st2;

    // sort both array,
    // compare both array element though the loops,
    // if mathes then push them into ans vector array & show the result

    // sort(v.begin(), v.end());
    // sort(v2.begin(), v2.end());


    // option 1
    for(int i : num1){
        for(int j : num2){
            if(i == j)
                st2.insert(i);
        }
    }
    
    for(int i : st2) ans.push_back(i);
    for(int i : ans) cout << i << " ";

    //  else : option 2
    for(int i : num1){
        if(find(num2.begin(), num2.end(), i) != num2.end())
            ans.push_back(i);
    }

    for(int i : ans) cout << i << " ";
    return 0;
}

*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        vector<int> ans;
        for (int i : nums1) {
            if (find(nums2.begin(), nums2.end(), i) != nums2.end())
                st.insert(i);
        }
        for(int i : st) ans.push_back(i);
        return ans;
    }
};