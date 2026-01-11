/*
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>nums = {-1,0,3,5,9,12};

    cout << binarySearch(nums, 12);

    return 0;
}

*/


// problem link : https://leetcode.com/problems/binary-search/description/?envType=problem-list-v2&envId=binary-search
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high = nums.size() - 1, low = 0;
        while (low <= high) {
            // the "mid" VARIABLE which should be decleared in the while loops's scope
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};