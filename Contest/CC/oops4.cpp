#include <bits/stdc++.h>
using namespace std;

class batch{
    protected:
    int a;

    public:
    batch();
    ~batch();
};

batch::batch(){
    cout<<"In batch constructor"<<endl;
    this->a = 12;
}
batch::~batch(){
    cout<<"In batch destructor"<<endl;
    cout<<"Accessing a from batch "<<this->a<<endl;
}

class course: public batch{
    public:
    void fun1();
    ~course();
};

void course::fun1(){
    cout<<"In derived class course "<<endl;
    cout<<this->a<<endl;
}

course::~course(){
    cout<<"In course destructor"<<endl;
    cout<<"Accessing a from course "<<this->a<<endl;
}

int main()
{
    // batch A;
    // A.set_a(3);
    course B;
    B.fun1();
    return 0;
}