#include <iostream>
using namespace std;

class someClass1
{
    public:
    int x = 1;
    void someHolder(){
        cout<<"some output = "<<x;
    }
};

class someClass2
{
    public:
    int x = 2;
    void someHolder(){
        cout<<"some output = "<<x;
    }
};


class someClass3 : public someClass1, public someClass2
{
    private:
    int someInput;
    
    public:
    int FunationCall(){
        cout<<"enter input";
        cin>>someInput;
        if (someInput == 1)
            someClass1::someHolder();
        if (someInput == 2)
            someClass2::someHolder();
        return 0;
    }
};

int main(){
    someClass3 b;
    b.FunationCall();
    return 0;
}