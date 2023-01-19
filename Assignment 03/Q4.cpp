// Print the average of three numbers entered by the user by creating a class named 'Average' having a function to calculate and print the average without creating any object of the Average class.

#include <iostream>
using namespace std;

class Average
{
public:
    static void calculateAndPrintAverage(double num1, double num2, double num3)
    {
        double average = (num1 + num2 + num3) / 3;
        cout << "The average of the three numbers is: " << average << endl;
    }
};

int main()
{
    double num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    Average::calculateAndPrintAverage(num1, num2, num3);
    return 0;
}
