/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> apple = {5,5,5};
    vector<int> capacity = {2,4,2,7};

    int sum = 0, cnt = 0, sum2 = 0;

    for (int i : apple)
        sum += i;
    sort(capacity.begin(), capacity.end(), greater<int>());

    // reverse(capacity.begin(), capacity.end());
    // cout << sum <<endl;
    // for(int i : capacity) cout << i << " ";
    // for (int i = 0; i < capacity.size(); i++)
    // {
    //     int cap_increase = 0;
    //     if (capacity[i] >= sum)
    //     {
    //         cout << 1 << endl;
    //         break;
    //     }
    //     else if (capacity[i] < sum)
    //     {
    //         cnt++, box_cap += capacity[i];
    //         // cout <<"counted "<< i << " times " <<cnt << endl;
    //         // cout << box_cap <<" increased " <<endl;
    //     }
    //     else if(box_cap >= 0){
    //         cout << cnt << endl;
    //     }
    // }
    // if (box_cap >= sum)
    //     cout << <<cnt << endl;

    for(int i : capacity){
        sum2+= i;
        cnt ++;
        if(sum2 >= sum){
            cout << sum2 << endl;
            cout << cnt << endl;
            break;
        }
    }
    return 0;
}

*/

// problem link : https://leetcode.com/problems/apple-redistribution-into-boxes/?envType=daily-question&envId=2025-12-24

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0, cnt = 0, sum2 = 0;
        for (int i : apple)
            sum += i;
        sort(capacity.begin(), capacity.end(), greater<int>());

        for (int i : capacity) {
            sum2 += i;
            cnt++;
            if (sum2 >= sum) {
                return cnt;
            }
        }
        return -1;
    }
};