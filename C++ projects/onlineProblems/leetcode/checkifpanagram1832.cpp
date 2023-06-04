#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkIfPanagram (string sentence){
        int result = 0;
        unordered_map<char, int> myMap;
        for(int i = 0; i < sentence.size(); i++){

            if(!myMap.count(sentence[i])){
                myMap[sentence[i]]++;
                result++;
            }
        }

        if(result == 26){
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    Solution sol;
    string s = "abcdefghijklmnopqrstuvwxyz";
    sol.checkIfPanagram(s);
    
    return 0;
}