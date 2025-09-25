#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> nums = {8, 4, 6, 4, 8, 6, 7};

    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans = count(nums.begin(), nums.end(), nums[i]);
        if(ans == 1){
            cout << nums[i] << "\n";
            break;
        }
    }
    return 0;
}