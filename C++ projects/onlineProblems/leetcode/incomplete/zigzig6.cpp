#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void convert (string s, int numRows) {
        string result = "";

        int loopvar = s.size();
        int i = 0;
        int uptodown = 0;
        int downtoup = numRows-1;
        while(i < loopvar){
            
            if(uptodown < numRows){
                s[uptodown];
                result+=s[uptodown];
                uptodown++;
            }

            if(uptodown == numRows-1){
                s[downtoup];
                result +=s[downtoup];
                downtoup--;
            }

            if(uptodown == 0 and uptodown == numRows-1){
                uptodown == 0;
                uptodown == numRows-1;
            }

            i++;

        }

        // return result;

    }
};
int main()
{
    Solution sol;
    string s = "PAYPALISHIRING";
    int n = 3;
    sol.convert(s, n);
    
    return 0;
}