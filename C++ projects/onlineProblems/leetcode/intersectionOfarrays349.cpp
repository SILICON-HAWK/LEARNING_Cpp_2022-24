#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void intersection (vector<int> nums1, vector<int> nums2)     {
        
        vector<int> result = {};
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int j = 0, k =0;

        while (j < nums1.size() || k < nums2.size())
        {
            if(nums1[j]==nums2[k]){
                
                result.push_back(nums1[j]);
                cout<<nums1[j]<<endl;
                j++;
                k++;
            }
            else if(nums1[j] < nums2[k] ){
                j++;
                cout<<"current value of j iterator = "<<j<<endl;

            }
            else if(nums1[j] > nums2[k] ){
                k++;
                cout<<"current value of k iterator = "<<k<<endl;
            }
        }

        unordered_set<int> result2(begin(result), end(result))
        // return result;
    }
};
int main()
{
    Solution sol;
    vector<int> nums1 = {1,2,2,1}, nums2 = {2,2};
    sol.intersection(nums1, nums2);
    
    return 0;
}