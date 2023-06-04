#include <bits/stdc++.h>
using namespace std;

// my solution

class greatestInt{
    public:

    int a,b,c,d;

    void GreatestInt(){
        
        cin>>a>>b>>c>>d;

        if(a > b){
            if(a > c){
                if(a>d){
                    cout<<a;  //test passed a is greatest
                }
                else {
                    cout<<d;   // if a>b & a>c but a<d then d is the greatest
                }
            }
            else {
                if(c > d){
                    cout<<c;   //if a>b by c>a then we check if c>d if its true then c is the greatest
                }
                else {
                    cout<<d;  //if c<d then that means d is the greatest
                }
            }
        }
        else{
            if(b > c){
                if(b > d){
                    cout<<b;  // we check for b>c and b>d if that passes then b is the greatest
                }
                else {
                    cout<<d;  //if above test failed then that means d>c and thus d is the greatest
                }
            }
            else{
                if(c > d){
                    cout<<c;  // check for exception if c>d then c is greatest 
                }
                else {
                    cout<<d;  //if all fails then d is the greatest
                }
            };
        }
    }
};

int main(){
    greatestInt G;
    G.GreatestInt();
}

/*sample answers from internet:
if(a > b){
    if(a > c){
        if(a>d)return a;
        else return d;
    }
    else {
        if(c > d)return c;
        else return d;
    }
}
else{
    if(b > c){
        if(b > d)return b;
        else return d;
    }
    else{
        if(c > d)return c;
        else return d;
    }
}

#include <bits/stdc++.h>  
using namespace std;  
void find_greatest(int a, int b, int c, int d)  
{  
    if (a > b) {  
        if (a > c) {  
            if (a > d) {  
                cout << "a is greatest";  
            }  
            else {  
                cout << "d is greatest";  
            }  
        }  
    }  
    else if (b > c) {  
        if (b > d) {  
            cout << "b is greatest";  
        }  
        else {  
            cout << "d is greatest";  
        }  
    }  
    else if (c > d) {  
        cout << "c is greatest";  
    }  
    else {  
        cout << "d is greatest";  
    }  
}  

*/