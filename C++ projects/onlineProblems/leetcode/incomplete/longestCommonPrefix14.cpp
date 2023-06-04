#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void longestCommonPrefix (vector<string> strs) {
        string result = "";

        for (int i = 0; i < strs.size(); i++)
        {
            for (int j = 0; j < strs[i].size(); j++)
            {
                if (strs[j][i])
                {
                    /* code */
                }
                
            }
            

        }
        
    }
};
int main()
{
    Solution sol;
    vector<string> strs = {"flower","flow","flight"};
    sol.longestCommonPrefix(strs);
    
    return 0;
}