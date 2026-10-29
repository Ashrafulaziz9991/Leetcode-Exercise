// https://leetcode.com/problems/ransom-note/description/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> freq, freq2;

        for (auto i : ransomNote)
            freq[i]++;
        for (auto i : magazine) {
            freq2[i]++;
        }

        for(char c : ransomNote){
            if(freq2[c] < freq[c])
                return false;
        }
        return true;
    }
};