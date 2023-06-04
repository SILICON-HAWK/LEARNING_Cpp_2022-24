#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> findDifference(vector<int> nums1, vector<int> nums2) {
        vector<vector<int>> result = {{},{}};
        unordered_set<int> subVec(begin(nums1), end(nums1)), subVecB(begin(nums2), end(nums2));
        //stores all the unique value in a vector/array uses a tree of sorts best case run time O(1) average O(1), worst case O(n) important concept.


        for(int n: subVec){
            if (subVecB.count(n) == 0){result[0].push_back(n);}
        }
        /*range based for loops, important point the variable "n" signifies the loop iterator
        variable, but inside the loop the var "n" takes up the value of whatever is at that index 
        example vector<int> = {3,43,2342,34,234} here for the value of n inside the loop is
        3 for iterator variable 1

        n = subVec[n] and also n = n. 
        */

        for(int n: subVecB){
            if (subVec.count(n) == 0){result[1].push_back(n);}
        }

        return result;
    }
};
int main()
{
    Solution sol;
    vector<int> nums1 = {};
    vector<int> nums2 = {};
    sol.findDifference(nums1, nums2);
    
    return 0;
}