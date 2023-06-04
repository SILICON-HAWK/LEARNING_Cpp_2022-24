#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sumOfMultiples (int n) {
        int result = 0;

        for(int i = 0; i <= n; i++){
            if ((i%3 == 0) || (i%5 == 0) || (i%7 == 0))
            {
                result += i;
            }
            
        }
        // return result;
    }
};
int main()
{
    Solution sol;
    sol.sumOfMultiples(7);
    
    return 0;
}