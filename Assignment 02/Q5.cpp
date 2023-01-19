/* Create a class 'Student' with three data members which are name, age and address. The constructor of the class assigns default values to name as "unknown", age as '0' and address as "not available". It has two functions with the same name 'setInfo'. First function has two parameters for name and age and assigns the same whereas the second function takes has three parameters which are assigned to name, age and address respectively. Print the name, age and address of 10 students.
Hint - Use array of objects
*/

#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        int age;
        string address;
        // constructor to assign default values
        Student() {
            name = "unknown";
            age = 0;
            address = "not available";
        }
        // function to set name and age
        void setInfo(string n, int a) {
            name = n;
            age = a;
        }
        // function to set name, age and address
        void setInfo(string n, int a, string ad) {
            name = n;
            age = a;
            address = ad;
        }
};

int main() {
    Student students[10];
    for(int i=0; i<10; i++) {
        string name;
        int age;
        string address;
        // input name, age and address
        cout << "Enter name, age and address of student " << i+1 << ": ";
        cin >> name >> age >> address;
        students[i].setInfo(name, age, address);
    }

    for(int i=0; i<10; i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Address: " << students[i].address << endl;
    }
    return 0;
}
