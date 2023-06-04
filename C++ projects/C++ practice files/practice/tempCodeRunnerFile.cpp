#include <iostream>
using namespace std;

class base{
    public:
    int x,y;
    void getdata(){
        cout<<"input the number";
        cin >> x;
    }


};

int main()
{
    base b;
    b.getdata();
    return 0;
}