// https://leetcode.com/problems/find-unique-binary-string/

/**
#include <bits/stdc++.h>
using namespace std;

void generateBinary(int n, string s, vector<string>&ans)
{
    // vector<string>ans;
    if (s.size() == n)
    {
        // cout << s << endl;
        ans.push_back(s);
        return;
    }

    generateBinary(n, s + "0", ans);
    generateBinary(n, s + "1", ans);
}

int main()
{
    // int n;
    // cin >> n;

    vector<string>nums = {"111","011","001", "000", "010", "100"};
    vector<string>ans;
    
    int len = nums[0].size();

    generateBinary(len, "", ans);

    for(auto i : ans){
        if(find(nums.begin(), nums.end(), i) == nums.end()){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}

*/


class Solution {
public:
    void generateBinary(int n, string s, vector<string>& ans) {
        if (s.size() == n) {
            ans.push_back(s);
            return;
        }

        generateBinary(n, s + "0", ans);
        generateBinary(n, s + "1", ans);
    }

    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<string>nums2(nums.begin(), nums.end());
        vector<string> tmp;
        int len = nums[0].size();
        generateBinary(len, "", tmp);
        for (auto i : tmp)
            if (!nums2.count(i))
                return i;
        return "";
    }
};