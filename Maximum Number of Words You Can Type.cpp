// link : https://leetcode.com/problems/maximum-number-of-words-you-can-type/
/**
 * push each words into vector string
 * check broken letters on string in found into vector string
 * if found then decrease each sz of vector and so on
 * finnaly return the vector size
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string text = "hello world" , brokenLetters = "ad", word;

    int count = 0;

    vector<string>words;
    stringstream ss(text);
    while(ss >> word)
        words.push_back(word);

    // for(auto w : words) cout << w << "\n";

    for(auto w : words){
        bool canType = true;
        for(char c : brokenLetters){
            if(find(w.begin(), w.end(), c) != w.end()){
                canType = false;
                break;
            }
        }
        if(canType) count++;
    }

    cout << count << endl;

    
    return 0;
}

/**
 * next : https://leetcode.com/problems/find-the-difference-of-two-arrays/
 * 
 * 
 */