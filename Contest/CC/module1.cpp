#include <iostream>
using namespace std;

int main() {
    int a = 10, &b = a; // b is reference of a
    // a and b have the same memory
    // int &bn = a; reference must always be initialized
    
    // int &k =5; //goves error
    const int &k =5; //goves error
    cout<<" &k "<<&k<<endl;

    int i=15, j=5;
    // int &k =5; //goves error
    const int &p =i+j; //goves error
    cout<<" &p "<<&p<<endl;

    // &b=i;

    cout << "a = " << a << ", b = " << b << endl;
    cout << "&a = " << &a << ", &b = " << &b << endl;
    ++a; // Changing a appears as change in b
    cout << "a = " << a << ", b = " << b << endl;
    ++b; // Changing b also changes a
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}