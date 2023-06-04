#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void restoreString (string s, vector<int> indices) {
        int n = s.size();
        
        string result = s;

        for (int i = 0; i < n; i++)
        {
            result[indices[i]] = s[i];
        }
        
        // return result;
        
    }
};
int main()
{
    Solution sol;
    // sol.restoreString();
    
    return 0;
}