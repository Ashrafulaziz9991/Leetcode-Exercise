// problem link : https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/


class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == arr[i+arr.size()/4])
                return arr[i];
        }
        return -1;
    }
};