#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void arrayStringAreEqual (vector<string> word1, vector<string> word2) {
        string str1 = "";
        string str2 = "";
        for (int i = 0; i < word1.size(); i++)
        {
            str1+=word1[i];
        }
        for (int i = 0; i < word2.size(); i++)
        {
            str2=word2[i];
        }

        
    }
};
int main()
{
    Solution sol;
    vector<string> word1, word2;
    sol.arrayStringAreEqual(word1, word2);
    
    return 0;
}