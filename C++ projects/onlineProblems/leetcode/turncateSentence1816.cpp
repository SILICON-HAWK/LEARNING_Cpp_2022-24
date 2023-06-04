#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void turncateSentence (string s, int k) {
        string result = "";
        int varWhiteSpcae = 1;
        for (int i = 0; i < s.size(); i++)
        {
            result += s[i];
            
            if(s[i] == ' '){
                varWhiteSpcae++;
            }
            if(varWhiteSpcae == k-1){
                result.pop_back();
                break;
            }
            
        }
        cout<<result;
        // return result;
        
    }
};
int main()
{
    Solution sol;
    string s = "idk some text here for test";
    int k = 3;
    sol.turncateSentence(s ,k);
    
    return 0;
}