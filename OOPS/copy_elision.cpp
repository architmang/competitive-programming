#include<bits/stdc++.h>
using namespace std;

class MyString {
public:
    MyString(const char* str) {
        // Constructor to initialize from a C-string
        cout<<"Normal Ctor called"<<endl;
    }

    // Copy constructor
    MyString(const MyString& other) {
        // Perform a deep copy of 'other'
        cout<<"Copy Ctor called"<<endl;
    }

    // Move constructor
    MyString(MyString&& other) {
        // Perform a deep copy of 'other'
        cout<<"Move Ctor called"<<endl;
    }

};

MyString CreateString() {
    MyString temp("Temporary");
    return temp; // Copy elision may occur
}

int main() {
    MyString str = move(CreateString());
    return 0;
}