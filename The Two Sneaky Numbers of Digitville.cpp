// problem link : https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/description/?envType=daily-question&envId=2025-10-31

/*
#include <bits/stdc++.h>
using namespace std;

// additional function
int count_element(int num, vector<int> &nums){
    int counter = 0;
    for(int &i : nums){
        if(i == num)
            counter++;
    }
    return counter;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector <int> nums = {7,1,5,4,3,4,6,0,9,5,8,2}, ans;
    unordered_map<int, int> freq;

    for (int x : nums)
    {
        freq[x]++;
        if (freq[x] >= 2)
        {
            // st.insert(x);
            ans.push_back(x);
        }
    }

    // for(int i : st) ans.push_back(i);
    for(int i : ans) cout << i <<" ";
    
    return 0;
}
*/

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
            if (freq[x] >= 2) {
                ans.push_back(x);
            }
        }
        return ans;
    }
};