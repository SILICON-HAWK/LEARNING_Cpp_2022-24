#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void countAsterisks (string s) {
        int result = 0;
        int tempResult = 0;
        bool noBar = false;
        int bar = 0;
        for(int i = 0; i <s.size(); i++){
            if(s[i] == '|'){
                bar++;
                if(bar == 2){
                    noBar ^= true;
                    if(noBar == true){
                        result += tempResult;
                    }
                    tempResult = 0;
                    bar = 0;
                }
            }
            if(s[i] == '*'){
                tempResult++;
            }
        }
        // return result;
    }
};
int main()
{
    Solution sol;
    string s = "yo|uar|e**|b|e***au|tifu|l";
    sol.countAsterisks(s);
    
    return 0;
}