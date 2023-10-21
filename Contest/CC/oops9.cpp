// This program uses a virtual base class.
#include <iostream>

using namespace std;
class Base {
  public:
   int i;
};

// Inherit Base as virtual
class Derived1 : public Base {
  public:
   int j;
};

// Inherit Base as virtual here, too
class Derived2 : public Base {
  public:
   int k;
};

// Here Derived3 inherits both Derived1 and Derived2.
// However, only one copy of base is inherited.
class Derived3 : public Derived1, public Derived2 {
  public:
   int product() { return i * j * k; }
};

int main() {
   Derived3 ob;
   ob.i = 10;  // unambiguous because virtual Base
   ob.j = 3;
   ob.k = 5;
   cout << "Product is: " << ob.product() << "\n";
   return 0;
}