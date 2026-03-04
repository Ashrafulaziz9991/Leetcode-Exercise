// problem link : https://leetcode.com/problems/maximum-ice-cream-bars/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>costs = {1,6,3,1,2,5};
    int coins, count = 0;cin >> coins;

    sort(costs.begin(), costs.end());

    int i = 0;
    while (i < costs.size())
    {
        if(costs[i] <= coins){
            coins -= costs[i];
            count++;
        }
        else break;
        i++;
    }

    cout << count;
    
    return 0;
}

*/


class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count = 0;
        sort(costs.begin(), costs.end());

        int i = 0;
        while (i < costs.size()) {
            if (costs[i] <= coins) {
                coins -= costs[i];
                count++;
            } else
                break;
            i++;
        }
        return count;
    }
};