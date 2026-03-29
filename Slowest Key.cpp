// problem link : https://leetcode.com/problems/slowest-key/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>releaseTimes = {9,29,49,50};
    string keysPressed = "cbcd";
    priority_queue<pair<int, char>>pq;

    pq.push({releaseTimes[0], keysPressed[0]});

    for(int j = 0; j < releaseTimes.size() - 1; j++){
        int x = abs(releaseTimes[j] - releaseTimes[j + 1]);
        // cout << x << endl;
        pq.push({x, keysPressed[j + 1]});
    }

    while (!pq.empty())
    {
        auto[v, k] = pq.top();
        pq.pop();
        cout << k << " " << v << endl;
    } 
    return 0;
}

*/


class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        priority_queue<pair<int, char>> pq;

        pq.push({releaseTimes[0], keysPressed[0]});

        for (int j = 0; j < releaseTimes.size() - 1; j++) {
            int x = abs(releaseTimes[j] - releaseTimes[j + 1]);
            pq.push({x, keysPressed[j + 1]});
        }
        return pq.top().second;
    }
};