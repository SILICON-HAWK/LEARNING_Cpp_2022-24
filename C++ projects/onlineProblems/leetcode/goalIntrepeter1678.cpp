#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string interpret(string command) {
        string result = "";
        string s = command;
        for(int i = 0; i < command.size(); i++){
            if(s[i] == 'G'){
                result += 'G';
            }
            if(s[i] == '(' and s[i+1] == ')'){
                result += 'o';
                i++;
            }
            if(s[i] == '(' and s[i+1] == 'a'){
                result += "al";
                i = i+2;
            }
            
        }
        return result;
    }
};
int main()
{
    Solution sol;
    string s = "";
    sol.interpret(s);
    
    return 0;
}