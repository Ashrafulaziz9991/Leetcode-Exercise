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

    vector<int>score = {10,3,8,9,44, 8, 6, 2, 13, 16};
    priority_queue<int>pq;

    unordered_map<int, string> mp;

    for(int i : score) pq.push(i);

    int count = 1;

    while (!pq.empty())
    {
        int x = pq.top();
        pq.pop();

        if(count == 1){
            mp[x] = "Gold Medal";
        }
        else if(count == 2){
            mp[x] = "Silver Medal";
        }
        else if(count == 3){
            mp[x] = "Brownze Medal";
        }
        else
            mp[x] += to_string(count);
        count++;
    }
    vector<string> position;

    for (int i = 0; i < score.size(); i++)
        position.push_back(mp[score[i]]);
    
    for(const auto word : position) cout << word << " ";

    return 0;
}

*/


// problem link : 

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int> pq;

        unordered_map<int, string> mp;
        for (int i : score)
            pq.push(i);
        int count = 1;
        while (!pq.empty()) {
            int x = pq.top();
            pq.pop();
            if (count == 1) {
                mp[x] = "Gold Medal";
            } else if (count == 2) {
                mp[x] = "Silver Medal";
            } else if (count == 3) {
                mp[x] = "Bronze Medal";
            } else
                mp[x] += to_string(count);
            count++;
        }
        vector<string> position;

        for (int i = 0; i < score.size(); i++)
            position.push_back(mp[score[i]]);
        return position;
    }
};