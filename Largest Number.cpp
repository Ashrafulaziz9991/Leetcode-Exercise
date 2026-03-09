// problem link : https://leetcode.com/problems/largest-number/

/**
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>
#include <cstring>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> nums = {3,30,34,5,9};
    vector<string> tmp;
    string ans = "";
    for(int i : nums) tmp.push_back(to_string(i));    

    auto it = [](const auto &a, const auto &b){
        return (b+a) < (a+b);
    };

    sort(tmp.begin(), tmp.end(), it);

    for(auto i : tmp) ans+=i;
    cout << ans;
    return 0;
}

// while (next_permutation(nums.begin(), nums.end()))
    // {
    //     for(int i : nums) cout << i << " ";
    //     count++;
    //     cout << endl;
    // }

    // for(auto i : tmp) cout << i << " ";

*/


class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> tmp;
        string ans = "";
        for (int i : nums)
            tmp.push_back(to_string(i));

        auto it = [](const auto& a, const auto& b) {
            return (b + a) < (a + b);
        };

        sort(tmp.begin(), tmp.end(), it);
        if(tmp[0] == "0") return "0";
        for (auto i : tmp)
            ans += i;
        return ans;
    }
};

