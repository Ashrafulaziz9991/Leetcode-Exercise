/**
 *problem link : https://leetcode.com/problems/check-if-n-and-its-double-exist/
 *  
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int>arr = {0,-2,2};
    bool flag = false;
    for(int i : arr){
        int x = i*2;
        if(x != i && find(arr.begin(), arr.end(), x) != arr.end()){
            flag = true;
            break;
        }
    }
    
    if(flag) cout << "YES";
    else cout <<"NO";
    return 0;
}

*/


class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int cnt = count(arr.begin(), arr.end(), 0);
        if(cnt > 1) return true;
        for (int i : arr) {
            int x = i * 2;
            if (x != i && find(arr.begin(), arr.end(), x) != arr.end())
                return true;
        }
        return false;
    }
};