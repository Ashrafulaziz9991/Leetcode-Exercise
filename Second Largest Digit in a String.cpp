// problem link : https://leetcode.com/problems/second-largest-digit-in-a-string/

class Solution {
public:
    int secondHighest(string s) {
        set<int>temp;
        vector<int>temp2;
        for(auto c : s){
            if(c >= '0' && c <= '9')
                temp.insert(c - '0');
        }
        if(temp.size() == 0) return -1;
        for(auto i : temp) temp2.push_back(i);
        int sz = temp2.size();
        if(sz == 1) return -1;
        else 
            return temp2[sz-2];

    }
};