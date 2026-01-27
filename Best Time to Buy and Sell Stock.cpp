// problem link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

/**
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> prices = {7,6,4,3,1};
    int mn = 0;

    // int j = 0;
    // for (int i = 1; i < prices.size(); i++)
    // {
    //     int diff = prices[j] + prices[i];
    //     cout << diff << " ";
    //     mn = max(diff, mn);
    //     j++;
    // }

    // cout <<  mn ;

    int j = 0; // left pointer (buy)
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++)
    { // right pointer (sell)
        if (prices[i] > prices[j])
        {
            maxProfit = max(maxProfit, prices[i] - prices[j]);
        }
        else
        {
            j = i; // Move j only when we find a lower price
        }
    }
    cout << maxProfit;
    return 0;
}

*/


/*

7 6

// it's when issue about finding tergeted sum using two pointers 
int left = 0, right = n - 1;

while (left < right) {
    int sum = arr[left] + arr[right];

    if (sum == target) {
        // found answer
        break;
    }
    else if (sum < target) {
        left++;    // move ONE pointer
    }
    else {
        right--;   // move ONE pointer
    }
}


*/



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int j = 0;
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[j]) {
                maxProfit = max(maxProfit, prices[i] - prices[j]);
            } else {
                j = i;
            }
        }
        return maxProfit;
    }
};