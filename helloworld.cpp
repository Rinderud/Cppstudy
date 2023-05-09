#include <iostream>

using namespace std;

class MyClass {
    public:
        int num;
        string str;
};

int main() {
    cout << "Hello World! \n";
    int x;
    cin >> x;
    x = (x > 10) ? 10 : x; // cond ? true : false
    cout << x << " was the input. \n";

    struct // A name before the brackets note a name of the structure itself
    {
        int num;
        bool isTrue;
    } myStructure; // When here the name note a variable of this struct

    myStructure.num = 1;
    myStructure.isTrue = true;

    MyClass myObj;
    myObj.num = 42;
    myObj.str = "Hi";
    
    return 0;
}