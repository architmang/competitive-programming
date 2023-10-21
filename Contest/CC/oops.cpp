#include <bits/stdc++.h>
using namespace std;

class myclass{
    int a;
    string s;

    public:
    void set(int num, string w)
    {
        a = num;
        s = w;
    }
    void get()
    {
        cout<<a<<endl;
    }
    void prints();
};

void myclass::prints(){cout<<"inside prints "<<myclass::s<<endl;} 

int main()
{
    myclass A;
    A.set(3, "archit");
    A.get();
    A.prints();
    return 0;
}