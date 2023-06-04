#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    string num[] = {"" ,"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        cout<<((i<=9) ? num[i]:((i%2==0) ? "even":"odd"))<<endl;
        cout<<"the loop variable is = "<<i<<endl;
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;
}
*/