#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {-1,0,1,2,-1,-4};
    set<vector<int>> tmp_ans;

    for (int i = 0; i < nums.size(); i++)
    {
        vector<int> temp = {};
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    sort(temp.begin(), temp.end());
                    tmp_ans.insert(temp);
                    temp.clear();
                }
            }
        }
    }

    vector<vector<int>> ans(tmp_ans.begin(), tmp_ans.end());

    for(auto i : tmp_ans){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << ans.size();
    return 0;
}