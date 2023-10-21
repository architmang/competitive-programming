#include <iostream>
using namespace std;

class Adder {
  private:
   int val;

  public:
   Adder() { val = 0; }
   void add(int value) { val += value; }
   void print_val() { cout<<this->val<<endl; }
   friend void reset(Adder &Adder);
};

void reset(Adder &Adder) {
   Adder.val = 0;

}
int main() {
   Adder acc;
   acc.add(5);
   acc.print_val();  
   reset(acc);  
   acc.print_val(); 
   return 0;
}