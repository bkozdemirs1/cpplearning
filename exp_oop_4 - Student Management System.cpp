#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Student {

private:

	string name;
	string lastName;
	int id;
	string department;
	double gpa;

public:

	Student(string name, string lastName, int id, string department, double gpa) {
		this->name = name;
		this->lastName = lastName;
		this->id = id;
		this->department = department;
		this->gpa = gpa;
	}

	Student() {
		this->name = "";
		this->lastName = "";
		this->id = 0;
		this->department = "";
		this->gpa = 0;
	}

	void setName(string name) {
		this->name = name;
	}

	void setLastName(string lastName) {
		this->lastName = lastName;
	}

	void setDepartment(string department) {
		this->department = department;
	}

	void setGpa(double gpa) {
		this->gpa = gpa;
	}

	string getName() {
		return name;
	}

	string getLastName() {
		return lastName;
	}

	int getId() {
		return id;
	}

	string getDepartment() {
		return department;
	}

	double getGpa() {
		return gpa;
	}
};

class StudentManagement {

private:

	vector<Student> students;

public:

	void addStudent(string name, string lastName, int id, string department, double gpa) {

		Student newStudent(name,lastName,id,department,gpa);

		students.push_back(newStudent);

	}

	void removeStudentbyId(int id) {

		if (students.empty()) {
			cout<<"No student found!"<<endl;
			return;
		}

		for (int i = 0; i < students.size(); i++) {
			if (students[i].getId() == id) {
				students.erase(students.begin() + i);
				cout << "Student removed\n";
				return;
			}
		}
		cout << "Student not found\n";

	}

	void showStudent() {

		if (students.empty()) {
			cout<<"No student found! Please add a student first!"<<endl;
			return;
		}

		int i = 1;

		for(Student s:students) {
			cout<<i<<"."<<" "<<"Student: "<<"\nName: "<<s.getName()<<" "<<"\nLastname: "<<s.getLastName()<<" "<<"\nDepartment: "<<s.getDepartment()<<" "<<"\nID: "<<s.getId()<<" "<<"\nGPA: "<<s.getGpa()<<endl;
			i++;
		}
	}

	void SearchStudentbyId(int id) {

		if (students.empty()) {
			cout<<"No student found!"<<endl;
			return;
		}

		for(int i = 0; i<students.size(); i++) {
			if(students[i].getId() == id) {
				cout<<"Student: "<<students[i].getName()<<" "<<students[i].getLastName()<<" "<<students[i].getDepartment()<<" "<<students[i].getGpa()<<endl;
				return;
			}
		}
		cout<<"Student not found\n";
	}

	void searchStudentbyName(string name, string lastName) {

		if (students.empty()) {
			cout<<"No student found!"<<endl;
			return;
		}

		for(int i = 0; i<students.size(); i++) {

			if(students[i].getName() == name && students[i].getLastName() == lastName) {
				cout<<"Student: "<<students[i].getName()<<" "<<students[i].getLastName()<<" "<<students[i].getDepartment()<<" "<<students[i].getGpa()<<endl;
				return;
			}
		}
		cout<<"Student not found\n";
	}

	void removeStudentbyName(string name, string lastName) {

		if (students.empty()) {
			cout<<"No student found!"<<endl;
			return;
		}

		for(int i = 0; i<students.size(); i++) {
			if(students[i].getName() == name && students[i].getLastName() == lastName) {
				students.erase(students.begin() + i);
				cout<<"Student removed!\n";
				return;
			}
		}
		cout<<"Student not found!\n";
	}

	void updateStudent(int id, int choice, string newText, double newGpa) {

		for (Student s : students) {

			if (s.getId() == id) {

				if (choice == 1) {

					s.setName(newText);
					cout<<"Name updated successfully.";

				}
				else if (choice == 2) {

					s.setDepartment(newText);
					cout<<"Department updated successfully.";

				}
				else if (choice == 3) {

					if (newGpa >= 0.0 && newGpa <= 4.0) {

						s.setGpa(newGpa);
						cout<<"GPA updated successfully.";
					}
					else {
						cout<<"Invalid GPA value.";
					}

				} else {
					cout<<"Invalid update choice.";
				}
				return;
			}
		}

		cout<<"Student not found.";
	}

};

int main()
{

	StudentManagement m;
	srand(time(NULL));

	while(true) {

		cout<<"\n************ MENU ************"<<endl;
		cout<<"1 -> Add a Student"<<endl;
		cout<<"2 -> Remove a Student by ID"<<endl;
		cout<<"3 -> Show Students"<<endl;
		cout<<"4 -> Search a Student by ID"<<endl;
		cout<<"5 -> Search a Student by Name"<<endl;
		cout<<"6 -> Remove a Student by Name"<<endl;
		cout<<"7 -> Update a Student by ID"<<endl;
		cout<<"0 -> Exit"<<endl;
		cout<<"******************************"<<endl;

		int choice;
		cout<<"Your Choice: ";
		cin>>choice;

		switch(choice) {

		case 0:

			cout<<"Exiting the System...Goodbye!";
			return 0;

		case 1: {

			cout<<"Student Name: "<<endl;
			string name;
			cin.ignore();
			getline(cin,name);

			cout<<"Student Lastname: "<<endl;
			string lname;
			cin>>lname;

			cout<<"Student Department: "<<endl;
			string department;
			cin>>department;

			cout<<"Student GPA: "<<endl;
			double gpa;
			cin>>gpa;

			int id = rand() % 9999 + 1;

			cout<<"\nStudent Name: "<<name<<" "<<"\nStudent Lastname: "<<lname<<" "<<"\nStudent Department: "<<department<<" "<<"\nStudent GPA: "<<gpa<<" "<<"\nStudent ID: "<<id<<endl;
			cout<<"has been added successfully!";

			m.addStudent(name,lname,id,department,gpa);
			break;
		}

		case 2: {

			cout<<"Enter Student's Id to Remove: ";
			int removeid;
			cin>>removeid;

			m.removeStudentbyId(removeid);
			break;
		}

		case 3: {

			m.showStudent();
			break;
		}

		case 4: {

			cout<<"Enter Student Id for Searching: ";
			int searchid;
			cin>>searchid;

			m.SearchStudentbyId(searchid);
			break;
		}

		case 5: {

			cout<<"Enter Student Name: ";
			string name;
			cin>>name;

			cout<<"Enter Student Lastname: ";
			string lname;
			cin>>lname;

			m.searchStudentbyName(name,lname);
			break;
		}

		case 6: {

			cout<<"Enter Student Name: ";
			string name;
			cin>>name;

			cout<<"Enter Student Lastname: ";
			string lname;
			cin>>lname;

			m.removeStudentbyName(name,lname);
			break;
		}

		case 7: {

			cout<<"Enter a Student ID for Update: "<<endl;
			int updateid;
			cin>>updateid;

			cout<<"1. Update Name"<<endl;
			cout<<"2. Update Department"<<endl;
			cout<<"3. Update GPA"<<endl;

			cout<<"Your choice: ";
			int updatechoice;
			cin>>updatechoice;
      
			if(updatechoice == 1) {
				cout<<"Enter a New Name: ";
				string updatename;
				cin>>updatename;
				m.updateStudent(updateid,1,updatename,0);
			}
			else if(updatechoice == 2) {
				cout<<"Enter a New Department: ";
				string updatedepartment;
				cin>>updatedepartment;;
				m.updateStudent(updateid,2,updatedepartment,0);
			}
			else if(updatechoice == 3) {
				cout<<"Enter a New GPA: ";
				double updategpa;
				cin>>updategpa;
				m.updateStudent(updateid,3,"",updategpa);
			}
			else {
				cout<<"Invalid choice. Please select a number between 1-3!";
			}
			break;
		}
		default:
			cout<<"Invalid choice. Please select a number range in 0-7!";
			break;
		}
	}
}
