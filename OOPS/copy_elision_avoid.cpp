#include <iostream>

class MyString {
public:
    MyString(const char* str) {
        // Constructor to initialize from a C-string
        std::cout << "Normal Ctor called" << std::endl;
    }

    // Copy constructor
    MyString(const MyString& other) {
        // Perform a deep copy of 'other'
        std::cout << "Copy Ctor called" << std::endl;
    }
};

class MyStringWrapper {
public:
    MyStringWrapper(MyString str) : myStr(str) {
        std::cout << "Wrapper Ctor called" << std::endl;
        // Constructor to wrap a MyString object
    }

private:
    MyString myStr;
};

MyStringWrapper CreateString() {
    MyString temp("Temporary");
    return MyStringWrapper(temp); // Return a temporary
}

int main() {
    MyStringWrapper wrappedStr = CreateString();
    return 0;
}
