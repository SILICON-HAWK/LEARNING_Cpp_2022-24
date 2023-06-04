#include<iostream>
using namespace std;

class day
{
  public:
  int dd,mm,yy;
  
  day(int d,int m, int y)
  {
    dd=d;mm=m;yy=y;
  }
  
    
  void operator ++ () 
  {
    dd++;
    mm++;
    yy++;
  }
  void  operator > (day &dayobj)
  {
    cout<<"\n process 1 success \n";
    if ((dd>dayobj.dd)&&(mm>dayobj.mm)&&(yy>dayobj.yy))
    cout<<"date1 > date2";
    else
    cout<<"date2 > date1";
  }
  
};
 
class day1
{
  public:
  int dd,mm,yy;

  day1(int d, int m, int y){
    dd=d;mm=m;yy=y;
  }
  void operator ++ (){
    dd++;
    mm++;
    yy++;
  }
  void operator < (day1 &day1obj)
  {
    cout<<"\n process 2 success \n";
    if ((dd<day1obj.dd)&&(mm<day1obj.mm)&&(yy<day1obj.yy))
    cout<<"date1 < date 2";
    else
    cout<<"date2 < date1 ";
  }

};


int main()
{

  day ob1(2,2,22);
  day ob2(12,2,22);
  ob1>ob2;

  day1 obj1(2,2,22);
  day1 obj2(1,2,22);
  obj1<obj2;

  return 0;
}

        
/*
#include<iostream>
using namespace std;
class day
  {
      int dd,mm,yy;
      public:
        day(int d,int m, int y)
         {
             dd=d;mm=m;yy=y;        }
             
              void operator ++ () {
                    dd++;
                    mm++;
                    yy++;
              }
              void  operator != (day &dayobj)
              {
                  if ((dd!=dayobj.dd)&&(mm!=dayobj.mm)&&(yy!=dayobj.yy))
                  cout<<"date1 is not equal to date2";
                  else
                  cout<<"date2 is equal to date1";
              }
       
  };
 
  int main()
     {
          day ob1(2,2,22);
          day ob2(2,2,22);
          ob1!=ob2;}

#include<iostream>
using namespace std;
class day
  {
      int dd,mm,yy;
      public:
        day(int d,int m, int y)
         {
             dd=d;mm=m;yy=y;        }
            
              void operator ++ () {
                    dd++;
                    mm++;
                    yy++;
              }
              void  operator == (day &dayobj)
              {
                  if ((dd==dayobj.dd)&&(mm==dayobj.mm)&&(yy==dayobj.yy))
                  cout<<"date1 is equal to date2";
                  else
                  cout<<"date2 is not equal to date1";
              }
      
  };

  int main()
     {
          day ob1(2,2,22);
          day ob2(2,2,22);
          ob1==ob2;}

#include<iostream>
using namespace std;
class day
  {
      int dd,mm,yy;
      public:
        day(int d,int m, int y)
         {
             dd=d;mm=m;yy=y;        }
             
              void operator ++ () {
                    dd++;
                    mm++;
                    yy++;
              }
              void  operator < (day &dayobj)
              {
                  if ((dd<dayobj.dd)&&(mm<dayobj.mm)&&(yy<dayobj.yy))
                  cout<<"date1 < date2";
                  else
                  cout<<"date2 < date1";
              }
       
  };

  int main()
     {
          day ob1(2,2,22);
          day ob2(2,2,22);
          ob1<ob2;}

#include<iostream>
using namespace std;
class day
  {
      int dd,mm,yy;
      public:
        day(int d,int m, int y)
         {
             dd=d;mm=m;yy=y;        }
             
              void operator ++ () {
                    dd++;
                    mm++;
                    yy++;
              }
              void  operator == (day &dayobj)
              {
                  if ((dd<=dayobj.dd)&&(mm<=dayobj.mm)&&(yy<=dayobj.yy))
                  cout<<"date1 <= date2";
                  else
                  cout<<"date2 <= date1";
              }
       
  };
  
int main(){
      day ob1(2,2,22);
      day ob2(2,2,22);
      ob1<=ob2;
}

#include<iostream>
using namespace std;
class day
  {
      int dd,mm,yy;
      public:
        day(int d,int m, int y)
         {
             dd=d;mm=m;yy=y;        }
             
              void operator ++ () {
                    dd++;
                    mm++;
                    yy++;
              }
              void  operator == (day &dayobj)
              {
                  if ((dd>=dayobj.dd)&&(mm>=dayobj.mm)&&(yy<=dayobj.yy))
                  cout<<"date1 >= date2";
                  else
                  cout<<"date2 >= date1";
              }
       
  };
  
int main(){
      day ob1(2,2,22);
      day ob2(2,2,22);
      ++ob1;
      ob1>=ob2;
}
*/