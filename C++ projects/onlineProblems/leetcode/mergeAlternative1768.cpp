#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void mergeAlternately (string word1, string word2) {
        string result = "";
        int maxLength = 0;
        word1.size() > word2.size() ? maxLength = word1.size() : maxLength = word2.size();

        for (int  i = 0; i < maxLength; i++)
        {
            if(word1.size() > i){
            result += word1[i];
            }

            if(word2.size() > i){
            result += word2[i];
            }
        }
        

        
    }
};
int main()
{
    Solution sol;
    string s = "abcd";
    string s1 = "pq";
    sol.mergeAlternately(s,s1);
    
    return 0;
}