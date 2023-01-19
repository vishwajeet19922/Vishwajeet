// Print the sum, difference and product of two complex numbers by creating a class named 'Complex' with separate functions for each operation whose real and imaginary parts are entered by the user.

#include <iostream>
using namespace std;

class Complex {
private:
    double real, imaginary;

public:
    void setValues(double r, double i) {
        real = r;
        imaginary = i;
    }

    void add(Complex c2) {
        cout << "Sum: " << real + c2.real << " + " << imaginary + c2.imaginary << "i" << endl;
    }

    void subtract(Complex c2) {
        cout << "Difference: " << real - c2.real << " + " << imaginary - c2.imaginary << "i" << endl;
    }

    void multiply(Complex c2) {
        double realPart = (real * c2.real) - (imaginary * c2.imaginary);
        double imaginaryPart = (real * c2.imaginary) + (imaginary * c2.real);
        cout << "Product: " << realPart << " + " << imaginaryPart << "i" << endl;
    }
};

int main() {
    double r1, i1, r2, i2;
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> r1 >> i1;
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> r2 >> i2;
    Complex c1, c2;
    c1.setValues(r1, i1);
    c2.setValues(r2, i2);
    c1.add(c2);
    c1.subtract(c2);
    c1.multiply(c2);
    return 0;
}
