// https://leetcode.com/problems/permutation-in-string/description/


// s1 might be have multiple permutaion, but we've to check whether that is
// existing on s2 or not if found then return true else return false;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // if(s1 > s2) return false;
        // sort(s1.begin(), s1.end());
        // while (next_permutation(s1.begin(), s1.end()))
        //     if (s2.find(s1) != string::npos)
        //         return true;
        // return false;

        if(s1.empty()) return true;

        if (s1.size() > s2.size())
            return false;

        sort(s1.begin(), s1.end());

        for (size_t i = 0; i + s1.size() <= s2.size(); ++i) {
            string candidate = s2.substr(i, s1.size());
            sort(candidate.begin(), candidate.end());

            if (candidate == s1)
                return true;
        }
        return false;
    }
};

