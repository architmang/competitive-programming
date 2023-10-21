#include<iostream>
using namespace std;

void* operator new(size_t n)
{
    cout<<"Overloaded new"<<endl;
    void* p;
    p=malloc(n);
    return p;
} 

void operator delete(void *p)
{
    cout<<"Overloaded delete"<<endl;
    free(p);
    return;
} 

int main()
{
    // 1
    int *p = new int;
    *p = 3;
    cout<<*p<<endl;
    delete p;
    return 0;
}