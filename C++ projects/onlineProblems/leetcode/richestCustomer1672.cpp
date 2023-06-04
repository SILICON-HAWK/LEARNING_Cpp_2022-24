#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void richestCustomer (vector<vector<int>> accounts) {
        int result = 0;

        for (int i = 0; i < accounts.size(); i++)
        {
            int temp = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                temp += accounts[i][j];

                temp > result ? result = temp : result = result;
            }
        }

        // return result;
         
    }
};
int main()
{   
    vector<vector<int>> accounts = {{2,8,7}, {7,1,3}, {1,9,5}};
    Solution sol;
    sol.richestCustomer(accounts);
    
    return 0;
}