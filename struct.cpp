#include <iostream>
#include <string>
using namespace std;

// Struct 
struct Student {
    string name;
    int age;
    double gpa;

    // Function in Struct
    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }

    // Successfull or not according to our GPA
    bool isSuccessful() {
        return gpa >= 2.5;
    }
};

int main() {
    Student student1; // we created our object as student1 but you can give whatever you want! :D
  
  student1.name = "Burak Kaan Özdemir";
    student1.age = 18;
    student1.gpa = 3.2;

    student1.printInfo(); // Using Func.

    if (student1.isSuccessful()) {
        cout << "Student is successful! " << endl;
    } else {
        cout << "Student is not successful! " << endl;
    }

    return 0;
}
