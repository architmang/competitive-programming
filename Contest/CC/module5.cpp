#include<iostream>
using namespace std;

void* operator new[](size_t n, char s)
{
    cout<<"Overloaded new"<<endl;
    void* p = operator new(n);
    memset(p, s, n);
    return p;
} 

void operator delete[](void *p)
{
    cout<<"Overloaded delete"<<endl;
    operator delete(p);
    return;
} 

ostream& operator<<(ostream& os, char* p)
{
    for(int i=0;i<3;i++)
    {
        os<<p[i]<<endl;
    }
    return os;
} 

int main()
{
    // 1
    char *p = new('#') char[3];
    cout<<p;
    delete [] p;
    return 0;
}