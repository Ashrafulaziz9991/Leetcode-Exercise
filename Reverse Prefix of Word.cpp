// https://leetcode.com/problems/reverse-prefix-of-word

class Solution {
public:
    string reversePrefix(string word, char ch) {
        auto idx = [](string s, char c) {
            for (int i = 0; i < s.size(); i++)
                if (s[i] == c)
                    return i;
            return -1;
        };

        int i = 0, j = idx(word, ch);
        while (i < j) {
            swap(word[i], word[j]);
            i++;
            j--;
        }

        return word;
    }
};