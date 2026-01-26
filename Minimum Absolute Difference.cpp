// problem link : https://leetcode.com/problems/minimum-absolute-difference/

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<int>>ans;
    vector<int>arr = {4,2,1,3}, v;
    // vector<int>nums = {4,2,1,3}, v;
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i : arr) pq.push(i);
    arr.clear();
    while (!pq.empty())
    {
        int x = pq.top();
        pq.pop();
        arr.push_back(x);
    }
    // sort(nums.begin(), nums.end());
    int mn = INT_MAX;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int diff = abs(arr[i] - arr[i + 1]);
        mn = min(mn, diff);
    }
    cout << mn << endl;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if(abs(arr[i] - arr[i + 1]) == mn){
            v.push_back(arr[i]);
            v.push_back(arr[i + 1]);
            ans.push_back(v);
        }
        v.clear();
    }
    for(auto i : ans){
        for(int j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

*/


class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int>v;
        sort(arr.begin(), arr.end());
        int mn = INT_MAX;
        for (int i = 0; i < arr.size() - 1; i++) {
            int diff = abs(arr[i] - arr[i + 1]);
            mn = min(mn, diff);
        }
        for (int i = 0; i < arr.size() - 1; i++) {
            if (abs(arr[i] - arr[i + 1]) == mn) {
                v.push_back(arr[i]);
                v.push_back(arr[i + 1]);
                ans.push_back(v);
            }
            v.clear();
        }
        return ans;
    }
};