#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void replaceString (string s) {
        string result = "";
        //ascii a == 97
        for (int i = 0; i < s.size(); i++)
        {
            if(isdigit(s[i])){
                char var = s[i-1];
                char word = (s[i]-48) + var ;
                result = result+word;
            }
            else{
                result += s[i];
            }

            // return result;
        }
        
    }
};
int main()
{
    Solution sol;
    string s = "a1c1e1";
    sol.replaceString(s);
    
    return 0;
}