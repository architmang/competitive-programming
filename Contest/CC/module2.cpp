#include<iostream>
using namespace std;

ostream& operator<<(ostream& os, int* p)
{
    for(int i=0;i<3;i++)
    {
        os<<p[i]<<endl;
    }
    return os;
} 

int main()
{
    // // 1
    // int *p = new int(3);
    // cout<<*p<<endl;
    // delete p;

    // 2
    // int *p = (int *)operator new(sizeof(int));
    // *p = 5;
    // cout<<*p<<endl;
    // operator delete (p);

    // 3
    int *p = new int[3];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;

    cout<<p<<endl;
    delete[] p;

    return 0;
}