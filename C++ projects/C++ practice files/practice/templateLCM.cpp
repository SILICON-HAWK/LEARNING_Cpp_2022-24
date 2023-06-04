#include <iostream>
using namespace std;

template <class T>

class CalculateNumber{
    public:
    T Number1, Number2, max;
    
    T gcd(T Number1, T Number2){
        // cout<<"entier 2 numbers :: "<<endl;
        // cin>>Number1>>Number2;
        // Everything divides 0
        if (Number1 == 0)
            return Number2;
        if (Number2 == 0)
            return Number1;
  
        // base case
        if (Number1 == Number2)
            return Number1;
  
        // a is greater
        if (Number1 > Number2){
            cout<<"the gcd is "<<Number1-Number2, Number2;
            return gcd(Number1-Number2, Number2);
            }
        cout<<"the gcd is "<<Number1, Number2-Number1;
        return gcd(Number1, Number2-Number1);
    };

    T lcm(T Number1, T Number2){
        
        // cout<<"entier 2 numbmbers :: "<<endl;
        // cin >> Number1 >> Number2;
        // maximum value between number1 and number2 is stored in max
        max = (Number1 > Number2) ? Number1 : Number2;

        do
        {
            if (max % Number1 == 0 && max % Number2 == 0)
            {
                cout << "LCM = " << max;
                break;
            }
            else
                ++max;
        } while (true);
        
        return 0;
    }

};

int main(){
    CalculateNumber<int> calc;
    calc.gcd(10, 50);
    calc.lcm(10, 40);
}