// polymorphism
#include <iostream>
using namespace std;

class Fruit
{
    string name;
    string color;
    public:
    Fruit(string n="", string c=""): name{n}, color{c} {}
    void getter() const { cout << "Name" }
};