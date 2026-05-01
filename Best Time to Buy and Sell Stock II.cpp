#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>prices = {7,1,5,3,6,4};
    // vector<int>prices = {1,2,3,4,5};
    int total_profit = 0, j = 0, i = 1;

    // for (int i = 1; i < prices.size(); i++)
    // {
    //     int instant_profit = 0;
    //     if(prices[i] > prices[j]){
    //         // instant_profit += (prices[i] - prices[j]);
    //         total_profit += (prices[i] - prices[j]);
    //         cout << prices[i] << " - "<< prices[j] <<" = " << total_profit << endl;
    //         // cout << total_profit << endl;
    //     }
    //     else j = i;
    //     i++;
    //     // total_profit += instant_profit;
    // }

    // for (int i = 1; i < prices.size(); i++)
    // {
    //     int instant_profit = 0;
    //     if(prices[i] > prices[j]){
    //         // instant_profit += (prices[i] - prices[j]);
    //         // total_profit += (prices[i] - prices[j]);
    //         cout << prices[i] << " - "<< prices[j] <<" = " <<(prices[i] - prices[j]) << endl;
    //         // cout << total_profit << endl;
    //     }
    //     else j = i;
    //     i++;
    //     // total_profit += instant_profit;
    // }

    for (int i = 0; i < prices.size(); i++)
    {
        for (int j = i + 1; i < count; i++)
        {
            /* code */
        }
        
    }
    

    // while (i < prices.size() && j < prices.size())
    // {
    //     int instant_profit = 0;
    //     if(prices[i] > prices[j]){
    //         instant_profit += (prices[i] - prices[j]);
    //     }
    //     else
    //         j = i;
    //     total_profit += instant_profit;
    // }
    

    cout << total_profit;
    
    return 0;
}