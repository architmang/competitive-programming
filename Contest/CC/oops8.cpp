#include <iostream>

using namespace std;
class base {
   int x;

  public:
   void setx(int n) { x = n; }

   void showx() { cout << x << "\n"; }
};
// Inherit as public
class derived : private base {
   int y;

  public:
   void sety(int n) { y = n; }

   void showy() { cout << y << "\n"; }
};
int main() {
   derived ob;
   ob.setx(10);  // access member of base class
   ob.sety(20);  // access member of derived class
   ob.showx();   // access member of base class
   ob.showy();   // access member of derived class
   return 0;
}