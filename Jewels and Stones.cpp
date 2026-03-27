// problem link : https://leetcode.com/problems/jewels-and-stones/description/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        for(auto i : jewels){
            for(auto j : stones){
                if(i == j)
                    cnt++;
            }
        }
        return cnt;
    }
};