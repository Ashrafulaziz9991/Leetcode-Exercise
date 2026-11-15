// https://leetcode.com/problems/reverse-string-prefix/description/ 

class Solution {
public:
    string reversePrefix(string s, int k) {
        if(k == 1) return s;
        int start = 0, endd = k - 1;

        while(start <= endd){
            swap(s[start] , s[endd]);
            start++;
            endd--;
        }
        return s;
    }
};