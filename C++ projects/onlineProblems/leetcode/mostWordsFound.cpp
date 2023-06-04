#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void mostWordsFound (vector<string> sentence) {
        
        int n = sentence.size();
        int result = 0;

        for (int i = 0; i < n; i++)
        {
            int count = 0;
            int sentenceSize = sentence[i].size();
            string CurrentSentence = sentence[i];

            for (int j = 0; j < sentenceSize; j++)
            {
                char currentWord = CurrentSentence[j];

                if (currentWord == ' '){
                    count++;

                    if (result < count){
                        result = count;
                    }
                    
                }
            }

            
            
        }
        // return result+1;
        // cout<<result+1<<endl;
        
    }
};
int main()
{
    Solution sol;
    vector<string> s = {"please wait", "continue to fight", "continue to win"};
    sol.mostWordsFound(s);
    
    return 0;
}