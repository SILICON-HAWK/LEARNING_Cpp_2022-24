#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void shuffle (vector<int> nums, int n) {
        
        int firstPtr = 0, secondPtr = n;
        vector<int> result;

        for(int i=0; i<n; i++){
            result.push_back(nums[firstPtr]);
            result.push_back(nums[secondPtr]);
            firstPtr++;
            secondPtr++;

        }
        // return result;
        
    }
};
int main()
{
    Solution sol;
    int n = 4;
    vector<int> var = {1,2,3,4,4,3,2,1};
    sol.shuffle(var, n);
    
    return 0;
}