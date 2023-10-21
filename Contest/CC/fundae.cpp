#include <bits/stdc++.h>
using namespace std;

class myclass{
    int a;
    string s;

    public:
    myclass(int a, string s);
    ~myclass();
    void show();
};

myclass::myclass(int a, string s){
    this->a = a;
    this->s = s; 
}

void myclass::show()
{
    cout<<myclass::a<<endl<<myclass::s<<endl;
}

myclass::~myclass()
{
    cout<<"In DESTRUCTOR of "<<myclass::s<<endl;
}

myclass A(6, "pontu");

void solve()
{
    myclass B(3, "archit");
    B.show();
}

int main()
{   solve();
    A.show();
    return 0;
}