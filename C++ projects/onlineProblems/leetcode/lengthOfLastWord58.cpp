#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int revPtr = s.size()-1;
        int result = 0;
        bool firstAlpha = false;
        while(revPtr >= 0){
            if(isalpha(s[revPtr])){
                result++;
                firstAlpha = true;
            }
            if(firstAlpha == true and s[revPtr] == ' '){
                break;
            }
            revPtr--;

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