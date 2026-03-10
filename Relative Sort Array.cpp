// problem link : https://leetcode.com/problems/relative-sort-array/description/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int>arr2 = {2,1,4,3,9,6};
    
    unordered_map<int, int>freq;
    for (int i = 0; i < arr2.size(); i++)
        freq[arr2[i]] = i;
    
    

    // custom comparator for sort
    auto it = [&](auto a, auto b){
        if(freq.count(a) && freq.count(b))
            return freq[a] < freq[b];
        if(freq.count(a)) return true;
        if(freq.count(b)) return false;
        return a < b;
    };

    sort(arr1.begin(), arr1.end(), it);

    for(int i : arr1)
        cout << i << " ";
    return 0;
}

*/



class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> freq;
        for (int i = 0; i < arr2.size(); i++)
            freq[arr2[i]] = i;

        // custom comparator for sort
        auto it = [&](auto a, auto b) {
            if (freq.count(a) && freq.count(b))
                return freq[a] < freq[b];
            if (freq.count(a))
                return true;
            if (freq.count(b))
                return false;
            return a < b;
        };

        sort(arr1.begin(), arr1.end(), it);
        return arr1;
    }
};