// problem link : https://leetcode.com/problems/find-k-pairs-with-smallest-sums/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> nums1 = {1,2,4,5,6}, nums2 = {3,5,7,9};
    int k = 3;

    vector<vector<int>>ans;
    // priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>, greater<pair<int, vector<int>>>> pq;
    // priority_queue<vector<int>>, vector<vector<int>>, std::greater<vector<int>> pq;
    // priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>pq;
    // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
    // priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> pq;


    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            // vector<int>x;
            // vector<int>x;
            int sum = nums1[i] + nums2[j];
            // pair<int, int>pi = {nums1[i], nums2[j]};
            pq.push({sum, {nums1[i], nums2[j]}});
            // x.push_back(nums1[i]);
            // x.push_back(nums2[j]);
            // ans.push_back(x);
            // pq.push(pi);
        }
    }

    // sort(ans.begin(), ans.end());

    
    
    while (!pq.empty())
    {
        vector<int>tmp;
        auto[a, b] = pq.top();
        // int a = pq.top().first;
        // int b = pq.top().second;
        pq.pop();
        // tmp.push_back(a);
        // tmp.push_back(b);
        ans.push_back(b);
        // tmp.clear();
        // cout << a << endl;
    }

    ans.resize(k);
    for(auto i : ans){
        for(auto j : i)
            cout << j <<" ";
        cout << endl;
    }
    return 0;
}