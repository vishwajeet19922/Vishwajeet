/* Create a class to print the area of a square and a rectangle. The class has two functions with the same name but different number of parameters. The function for printing the area of rectangle has two parameters which are its length and breadth respectively while the other function for printing the area of square has one parameter which is the side of the square.
*/

#include <iostream>
using namespace std;

class Area {
    public:
        void printArea(int side) {
            cout << "Area of square: " << side * side << endl;
        }
        void printArea(int length, int breadth) {
            cout << "Area of rectangle: " << length * breadth << endl;
        }
};

int main() {
    Area a;
    a.printArea(5); // prints area of square with side 5
    a.printArea(5, 10); // prints area of rectangle with length 5 and breadth 10
    return 0;
}
