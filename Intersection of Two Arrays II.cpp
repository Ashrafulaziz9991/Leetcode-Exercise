// problem link : https://leetcode.com/problems/intersection-of-two-arrays-ii/


/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int>nums1 ={1,2};
    vector<int>nums2 ={1, 1};
    vector<int>ans ={};
    set<int>st;

    if(nums1.size() < nums2.size()){
        for (int i : nums1) {
            if (find(nums2.begin(), nums2.end(), i) != nums2.end())
                st.insert(i), ans.push_back(i);
        }
    }
    else if(nums1.size() > nums2.size())
    {
        for (int i : nums2) {
            if (find(nums1.begin(), nums1.end(), i) != nums1.end())
                st.insert(i), ans.push_back(i);
        }
    }
    else if(nums1.size() == nums2.size()){
        for (int i : nums2) {
            if (find(nums1.begin(), nums1.end(), i) != nums1.end())
                st.insert(i), ans.push_back(i);
        }
    }

    cout << st.size() << endl;
    cout << ans.size() << endl;

    for(auto i : ans) cout << i << " ";
    cout << endl;
    for(auto i : st) cout << i << " ";
    return 0;
}
*/



/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>nums1 = {1,2,2,1}; 
    vector<int>nums2 = {2,2}, ans;


    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    // nums2.erase(nums2.begin() + 2);

    for (int i = 0, j = 0; i < nums1.size() && j < nums2.size();)
    {
        if(nums1[i] == nums2[j]){
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
        else if(nums1[i] > nums2[j])
            j++;
        else
            i++;
    }

    // for(int i : nums2) cout << i << " ";
    for(int i : ans) cout << i << " ";
    return 0;
}

*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        for (int i = 0, j = 0; i < nums1.size() && j < nums2.size();) {
            if (nums1[i] == nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] > nums2[j])
                j++;
            else
                i++;
        }
        return ans;
    }
};