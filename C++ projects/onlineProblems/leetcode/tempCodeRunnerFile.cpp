#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void replaceString (string s) {
        string result = "";

        for (int i = 0; i < s.size(); i++)
        {
            if(isdigit(s[i])){
                result = result+s[i];
            }
        }
        char a = 'b';
        int e = a;
        cout<<e<<endl;
        
    }
};
int main()
{
    Solution sol;
    string s = "a1c1e1";
    sol.replaceString(s);
    
    return 0;
}