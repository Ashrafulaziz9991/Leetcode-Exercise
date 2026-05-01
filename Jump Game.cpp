#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {2,3,1,1,4};
    int dest = 0;

    int start = 0;
    int n = nums.size();

    for (int i = 1; i < n; i++)
    {
        int x = nums[i] + nums[start];
        cout << x << endl;
        start += x;
        if(start <= n){
            flag = false;
        }

    }
    
    return 0;
}