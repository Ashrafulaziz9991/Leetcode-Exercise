#include <bits/stdc++.h>
using namespace std;

int fun(vector<int>&nums, int start){
    int curr = nums[start], n = nums.size(), counter = 0;
    if(start >= n - 1)
        return counter;
    
    if(nums[start + 3] > nums[start]){
        counter += 1;
        curr = nums[start + 3];
        return counter + fun(nums, start + 3);
    }
    else if(nums[start + 2] > nums[start]){
        counter += 1;
        curr = nums[start + 2];
        return counter + fun(nums, start + 2);
    }
    else if(nums[start + 1] > nums[start]){
        counter += 1;
        curr = nums[start + 1];
        return counter + fun(nums, start + 1);
    }
    return counter;
}

int fun(vector<int>&nums, int start){
    int n = nums.size();
    if(start >= n - 1) return 0;
    int curr = nums[start];
    if(start + 3 < n && nums[start + 3] > curr){
        return 1 + fun(nums, start + 3);
    }
    else if(start + 2 < n && nums[start + 2] > curr){
        return 1 + fun(nums, start + 2);
    }
    else if(start + 1 < n && nums[start + 1] > curr){
        return 1 + fun(nums, start + 1);
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {2,3,0,1,4};
    cout << fun(nums, 0);
    return 0;
}