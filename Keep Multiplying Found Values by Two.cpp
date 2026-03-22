#include <bits/stdc++.h>
using namespace std;

int org(vector<int>&arr, int orginal){
    if(find(arr.begin(), arr.end(), orginal) == arr.end())
        return orginal;

    orginal = orginal * 2;
    if(find(arr.begin(), arr.end(), orginal) != arr.end())
        return org(arr, orginal);
    return orginal;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {2,7,9};
    int original = 4;

    cout << org(nums, original);
    return 0;
}