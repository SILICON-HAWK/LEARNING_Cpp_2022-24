#include <bits/stdc++.h>
using namespace std;
#define vectori vector<int>

class Solution {
public:
    void numIdenticalPairls (vector<int> nums) {
        
        int n = nums.size();
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (nums[i] == nums[j] && i < j )
                {
                    result++;
                    cout<<result<<endl;
                }
                
            }
            
        }
        
        
    }
};
int main()
{
    Solution sol;
    vectori some = {1,2,3,1,1,3};
    sol.numIdenticalPairls(some);
    
    return 0;
}