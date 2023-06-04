#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void averageWaitTime (vector<vector<int>> customers) {
        double waitTime = 0;
        int queueTime = 0;

        for (int i = 0; i < customers.size(); i++)
        {
            queueTime = customers[i][1] + customers[i][2];
        }
        
    }
};
int main()
{
    Solution sol;

    vector<vector<int>> customers = {{5,2},{5,4},{10,3},{20,1}};
    sol.averageWaitTime(customers);
    
    return 0;
}