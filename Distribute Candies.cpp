/**
 * 
 * problem link : https://leetcode.com/problems/distribute-candies/
 * 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>candyType = {6,6,6,6};
    unordered_map<int, int>freq;
    for(int i : candyType) freq[i]++;
    int count = 0, n = candyType.size()/2;
    for(auto i : freq) count++;
    int ans = (n < count) ? n : count;

    cout << freq.size();

    // cout << ans;
    return 0;
}

*/


class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int, int> freq;
        for (int i : candyType)
            freq[i]++;
        int n = candyType.size() / 2;
        return (n < freq.size()) ? n : freq.size();
    }
};