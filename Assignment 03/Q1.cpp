// Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with the constructor having the three sides as its parameters.

#include <iostream>
#include <cmath>

using namespace std;

class Triangle
{
    private:
        double side1, side2, side3;
    public:
        Triangle(double s1, double s2, double s3)
        {
            side1 = s1;
            side2 = s2;
            side3 = s3;
        }
        double getPerimeter()
        {
            return side1 + side2 + side3;
        }
        double getArea()
        {
            double s = (side1 + side2 + side3) / 2.0;
            return sqrt(s * (s - side1) * (s - side2) * (s - side3));
        }
};

int main()
{
    double s1 = 3, s2 = 4, s3 = 5;
    Triangle t(s1, s2, s3);

    cout << "Perimeter of triangle: " << t.getPerimeter() << " units" << endl;
    cout << "Area of triangle: " << t.getArea() << " sq units" << endl;

    return 0;
}
