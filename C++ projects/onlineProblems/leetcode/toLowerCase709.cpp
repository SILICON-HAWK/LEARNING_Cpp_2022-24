#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        string result = "";
        int caseDelta = 'a' - 'A';
        int a = 'a', z = 'z';
        for (int i = 0; i < s.size(); i++)
        {
            int currChar = s[i];
            if (currChar >= 'A' && currChar <= 'Z')
            {
                currChar += caseDelta;
            }
            
            result += currChar;
        
        }
        return result;

    }
};
int main()
{
    Solution sol;
    string s = "al&phaBET";
    sol.toLowerCase(s);
    
    return 0;
}