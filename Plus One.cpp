// problem link : https://leetcode.com/problems/plus-one/

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x; cin >> x;
    vector<int>digits(x);
    for(int i = 0; i < x ; i++) cin >> digits[i];

    int n = digits.size() - 1;
      
      for (int i = n; i >= 0; --i)
      { 
        if (digits[i] == 9)
            digits[i] = 0;
      else
      {  
          digits[i] += 1;
        //   return digits;
        for(auto i : digits) cout << i << " ";
          return 0;
        }
      }
      digits.push_back(0);
      digits[0] = 1;
    
    return 0;
}

*/
/*
Example : 1
input : 
{9,9} 

output :
{1,0,0}



*/


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int x = digits.size() - 1;

        while(x >= 0){
            if(digits[x] == 9) digits[x] = 0;
            else{
                digits[x] += 1;
                return digits;
            }
            x--;
        }
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};