#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void findValueAfterOperations (vector<string> operations) {

        int result = 0;

        for (int i = 0; i < operations.size(); i++){
            
            string currentOperation = operations[i];
            if (currentOperation == "++X" || currentOperation ==  "X++"){
                result++;
            }

            else if (currentOperation == "--X" || currentOperation ==  "X--"){
                result--;
            }
        }
        // return result;
    }
};
int main()
{
    Solution sol;
    vector<string> something = {"++X","++X","X++"};
    sol.findValueAfterOperations(something);
    
    return 0;
}