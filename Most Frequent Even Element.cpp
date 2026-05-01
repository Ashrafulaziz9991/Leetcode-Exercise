#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {};
    unordered_map<int, int> freq;

    for(int i : nums) freq[i]++;

    auto it = [&](auto a, auto b){
        if(freq[a] == freq[b])
            return a < b;
        return a > b;
    };

    int val = 0;
    for(auto[k, v] : freq){
        if(k % 2 == 0 && v > val)
        {
            val = v;
            it(k, v);
        }
    }
    return 0;
}