#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void numJewelsInStones (string jewels, string stones) {
        int result = 0;

        for (int i = 0; i < stones.size(); i++)
        {
            for (int j = 0; j < jewels.size(); j++)
            {
                if(jewels[j] == stones[i]){
                    result++;
                }
            }
            
        }
        
        // return result;
    }
};
int main()
{
    Solution sol;
    string jewels = "aA", stones = "aAAbbbb";
    sol.numJewelsInStones(jewels, stones);
    
    return 0;
}