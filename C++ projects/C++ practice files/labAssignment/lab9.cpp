#include<iostream>
using namespace std;

template <class T>

int find(T x, T y, T z) {

   T lar;

   if (x > y && x > z) {
       lar = x;
   } else if (y > z) {
       lar = y;
   } else {
       lar = z;
   }
   return lar;
}

int main() {

   int x, y, z, lar;
   cout << "Enter three numbers:";
   cin >> x >> y>>z;

   lar = find(x, y, z);
   cout << "Largest is:" << lar;

   return 0;
}
