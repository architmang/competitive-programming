// C++ program for function overriding with data members
#include <bits/stdc++.h>
using namespace std;

// base class declaration.
class Animal {
public:
    int count;
	string color;
    Animal(){
        cout<<"Inside Animal Constructor"<<endl;
        color="black";
        count++;
    }
    ~Animal(){
        cout<<"Inside Animal Destructor"<<endl;
    }
};

// int Animal::count=0;

// inheriting Animal class.
class Dog : public Animal {
public:
	string color;
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
	Animal d = Dog();
	cout << d.color << endl;
	Animal e = Dog();
	cout << e.color << endl;
    cout<<"-------------"<<endl;
    cout<<"count "<<d.count<<endl;
}
