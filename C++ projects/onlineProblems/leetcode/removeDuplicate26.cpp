#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int result = 1;
        int ptr1 = 0, ptr2 = 1;
        
        while (ptr2 < nums.size()) {
            if (nums[ptr1] != nums[ptr2]) {
                nums[++ptr1] = nums[ptr2];
                result++;
            }
            ptr2++;
        }
        return result;
    }
};
int main()
{
    Solution sol;
    // sol.();
    
    return 0;
}