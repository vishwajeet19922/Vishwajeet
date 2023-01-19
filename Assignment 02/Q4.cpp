/* A class has an integer data member 'i' and a function named 'printNum' to print the value of 'i'. Its subclass also has an integer data member 'j' and a function named 'printNum' to print the value of 'j'. Make an object of the subclass and use it to assign a value to 'i' and to 'j'. Now call the function 'printNum' by this object.
*/

#include <iostream>
using namespace std;

class Base {
    public:
        int i;
        void printNum() {
            cout << "i: " << i << endl;
        }
};

class Derived : public Base {
    public:
        int j;
        void printNum() {
            cout << "j: " << j << endl;
        }
};

int main() {
    Derived d;
    d.i = 5;
    d.j = 10;
    d.printNum(); // prints j: 10
    return 0;
}
