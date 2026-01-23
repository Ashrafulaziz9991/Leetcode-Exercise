// problem link : 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string word = "horse", word2 = "ros";
    int len, op = 0;

    if(word2.size() < word.size()){
        len = word.size() - word2.size();
        // op += len;
        for (size_t i = len; i < word.size(); i++)
        {
            for (size_t j = 0; j < word2.size(); j++)
            {
                if(word[i] != word2[j]){
                    op++;
                }
            }
        }
    }

    else if(word2.size() == word.size()){
        for (size_t i = 0; i < word.size(); i++)
        {
            for (size_t j = 0; j < word2.size(); j++)
            {
                if(word[i] != word2[j]){
                    op++;
                }
            }
        }
    }

    cout << len << endl;
    cout << op << endl;
    
    return 0;
}