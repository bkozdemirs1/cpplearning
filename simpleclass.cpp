#include <iostream>
using namespace std;

class Student { 
private:
    string name;
    int age;
    double gpa;

public:
    void setInfo(string n, int a, double g) {
        name = n;
        age = a;
        gpa = g;
    }

    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }

    bool isSuccessful() {
        return gpa >= 2.5; 
    }
};

int main() {
    Student s1; // as you can see there's not much difference between class and structs. Only difference is class has public values in itself. Struct doesn't. 
    Student s2; // if your values are private you can keep them in class by using "private:".

    s1.setInfo("Burak", 18, 3.4);
    s2.setInfo("Merve", 19, 2.1);

    s1.printInfo();
    if (s1.isSuccessful())
        cout << "Burak is successful " << endl;
    else
        cout << "Burak is not successful " << endl;

    cout << endl;

    s2.printInfo();
    if (s2.isSuccessful())
        cout << "Kaan is successful " << endl;
    else
        cout << "Kaan is not successful " << endl;

    return 0;
}
