// problem link : https://leetcode.com/problems/first-letter-to-appear-twice/

class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char>ust;
        char ans;
        for(char &c : s){
            if(ust.count(c))
                return c;
            ust.insert(c);
        }
        return '0';
    }
};