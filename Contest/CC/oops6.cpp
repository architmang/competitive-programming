// C++ program for function overriding with data members
#include <bits/stdc++.h>
using namespace std;

// base class declaration.
class Animal {
public:
	string color;
    Animal(){
        cout<<"Inside Animal Normal Constructor"<<endl;
        color="black";
    }
    Animal(const Animal &obj){
        cout<<"Inside Animal Copy Constructor"<<endl;
        color=obj.color;
    }
    ~Animal(){
        cout<<"Inside Animal Destructor"<<endl;
    }
};

// inheriting Animal class.
class Dog : public Animal {
public:
	// string color;
    Dog(){
        cout<<"Inside Dog Constructor"<<endl;
        color="grey";
    }
    ~Dog(){
        cout<<"Inside Dog Destructor"<<endl;
    }

};

// Driver code
int main(void)
{
	Dog d = Dog(); // accessing the field by reference
					// variable which refers to derived
	cout << d.color << endl;
}
