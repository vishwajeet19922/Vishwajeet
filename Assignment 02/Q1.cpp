// Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. The class has three constructors which are :
// 1 - having no parameter - values of both length and breadth are assigned zero.
// 2 - having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
// 3 - having one number as parameter - both length and breadth are assigned that number.
// Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.

#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length, breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    Rectangle(double l, double b)
    {
        length = l;
        breadth = b;
    }

    Rectangle(double side)
    {
        length = side;
        breadth = side;
    }

    double area()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle r1;
    cout << "Area of rectangle with no parameter: " << r1.area() << endl;

    double l, b;
    cout << "Enter the length and breadth of rectangle with two parameters: ";
    cin >> l >> b;
    Rectangle r2(l, b);
    cout << "Area of rectangle with two parameters: " << r2.area() << endl;

    double side;
    cout << "Enter the side of rectangle with one parameter: ";
    cin >> side;
    Rectangle r3(side);
    cout << "Area of rectangle with one parameter: " << r3.area() << endl;
    return 0;
}
