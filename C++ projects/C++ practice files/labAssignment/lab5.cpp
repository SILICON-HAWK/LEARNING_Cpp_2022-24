/*Develop a program which will read a string and rewrite it in the
alphabetical order. For example, the word STRING should be written as
GINRST*/

#include <bits/stdc++.h>
using namespace std;
 
// Function to check whether string
// is palindrome
string isPalindrome(string S)
{
    // Iterate over the range [0, N/2]
    for (int i = 0; i < S.length() / 2; i++) {
 
        if (S[i] != S[S.length() - i - 1]) {
            //if s[i] element is not equal to N-[n-i-1]
            // Return No
            return "No it is not a palindrome";
        }
    }
    return "Yes it is a palindrome";
}
  
// Driver Code
int main()
{
    string S;
    int choiceVariable;

    cout<<"type 1 to start == ";
    cin>>choiceVariable;
    while(choiceVariable == 1){

        cout<<"enter your string == ";
        cin >> S;
        cout << isPalindrome(S)<<endl;
        sort(S.begin(), S.end());
        cout<< "sorted string ==" << S<<endl;

        cout<<"if you want to continue palindrome test type '1'"<<endl;
        cout<<"if you want to end the palindrome test type '0'"<<endl;
        cin>>choiceVariable;

        if (choiceVariable == 0){
            break;
        }
    }
    return 0;
}