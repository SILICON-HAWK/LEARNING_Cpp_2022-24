#include <iostream>
using namespace std;
class student
{
    private:
      int regno;
      char name[20];
      int m1,m2,m3,tot=0;
      int avg;

      public:
      void inputfunc();
      void processmark();
     void outputfunc();
};

 
void student::inputfunc()
        {
            cout<<"Enter the regno..: ";
            cin>>regno;
            cout<<"Enter the name..: ";
            cin>>name;
            cout<< "enter the mark1..: ";
            cin>>m1;
            cout<< "enter the mark2..: ";
            cin>>m2;
            cout<< "enter the mark3..: ";
            cin>>m3;
        }

     void student::processmark()
          {
              tot=m1+m2+m3;
              cout<<tot;
              avg=tot/3;

          }

      void student::outputfunc()
        {
            cout<<"given regno..: "<<regno;
            cout<<"\ngiven name..: "<<name;
            cout<<"\nthe given mark1..: "<<m1;
            cout<<"\nthe total is..: "<<tot;
            cout<<"\n avg is ..: "<<avg;
        }
 

int main()
{
   student s1;
   s1.inputfunc();
   s1.outputfunc();
 return 0;
}