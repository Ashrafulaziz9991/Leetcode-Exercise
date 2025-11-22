// problem link : https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/?envType=daily-question&envId=2025-11-22

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> nums = {3,6,9};
    int count = 0;
    for(int i : nums){
        if(i % 3 != 0) count++;
    }
    cout << count; 
    return 0;
}