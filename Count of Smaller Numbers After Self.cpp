#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>nums = {8,1,2,2,3}, ans;

    unordered_map<int, int> freq;

    for(int i : nums) freq[i]++;


    for (int i = 1; i < nums.size(); i++)
    {
        freq[i] += freq[i - 1];
    }

    for(int i : nums){
        if(i == 0)
            ans.push_back(0);
        else
            ans.push_back(freq[i - 1]);
    }

    for(int i : ans) cout << i << " ";
    
    return 0;
}