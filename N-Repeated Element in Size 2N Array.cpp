// problem link : https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cout << "**** valo ho ****";
    vector<int>arr = {5,1,5,2,5,3,5,4};
    unordered_map<int, int>freq;
    int n = arr.size()/2, terget;
    for(int i : arr) freq[i]++;
    for(int i : arr)
        if(freq[i] == n){
            terget = i;
            break;
        }
    
    cout << terget;

    return 0;
}
*/


class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size() / 2;
        for (int i : nums)
            freq[i]++;
        for (int i : nums)
            if (freq[i] == n)
                return i;
        return 0;
    }
};