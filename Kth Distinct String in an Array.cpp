// problem link : https://leetcode.com/problems/kth-distinct-string-in-an-array/


/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string>arr = {"b","a","c","a"};
    int k = 2;
    string ans = "", temp = "";
    unordered_map<string, int>freq;
    for(auto i : arr) freq[i]++;

    int cnt = 0;

    for(auto i : arr){
        if(freq[i] == 1)
            cnt++, temp += i;
        if(cnt == k)
            ans = i;
    }

    cout << ans <<endl;
    cout << temp << endl;
    cout << freq["a"];
    return 0;
}

*/


class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        string ans = "";
        unordered_map<string, int> freq;
        for (auto i : arr)
            freq[i]++;

        int cnt = 0;

        for (auto i : arr) {
            if (freq[i] == 1)
                cnt++;
            if (cnt == k)
                return i;
        }
        return ans;
    }
};