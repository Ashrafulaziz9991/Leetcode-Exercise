/**
 * problem link : https://leetcode.com/problems/rank-transform-of-an-array/description/
 * 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>arr = {37,12,28,9,100,56,80,5,12};
    int count = 1;

    priority_queue<int, vector<int>, greater<int>>pq;
    unordered_map<int, int> ump;

    for(int i : arr) pq.push(i);

    while (!pq.empty())
    {
        // cout << pq.top() << endl;
        // pq.pop();
        int x = pq.top();
        pq.pop();
        // cout << x << endl;
        // ump.insert({x, count++});
        if (!ump.count(x))
        ump[x] = count++;
        // ump.insert({x, count});
        // ump[x] = count;
        // count++;
    }

    vector<int>position;
    for (int i = 0; i < arr.size(); i++)
        position.push_back(ump[arr[i]]);
    
    for(int i : position) cout << i << " "; 
    return 0;
}

 */


class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int count = 1;
        priority_queue<int, vector<int>, greater<int>> pq;
        unordered_map<int, int> ump;

        for (int i : arr)
            pq.push(i);

        while (!pq.empty()) {
            int x = pq.top();
            pq.pop();
            if (!ump.count(x))
            ump[x] = count++;
        }
        vector<int> position;
        for (int i = 0; i < arr.size(); i++)
            position.push_back(ump[arr[i]]);
        return position;
    }
};
