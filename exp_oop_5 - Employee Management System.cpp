#include <iostream>
#include <stdio.h>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

class Employee {

private:

	int employeeid;
	string name;
	string lastname;
	string email;
	string phoneNumber;
	string position;
	int departmentId;
	double salary;
	double performanceScore;

public:

	Employee(int employeeid, string name, string lastname, string email, string phoneNumber, string position, int departmentId) {
		this->employeeid = employeeid;
		this->name = name;
		this->lastname = lastname;
		this->email = email;
		this->phoneNumber = phoneNumber;
		this->position = position;
		this->departmentId = departmentId;
		this->salary = 0;
		this->performanceScore = 0;
	}

	void setEmployeeId(int employeeid) {
		this->employeeid = employeeid;
	}

	void setName(string name) {
		this->name = name;
	}

	void setLastName(string lastname) {
		this->lastname = lastname;
	}

	void setEmail(string email) {
		this->email = email;
	}

	void setPhoneNumber(string phoneNumber) {
		this->phoneNumber = phoneNumber;
	}

	void setPosition(string position) {
		this->position = position;
	}

	void setDepartmentId(int departmentId) {
		this->departmentId = departmentId;
	}

	void setSalary(double salary) {
		this->salary = salary;
	}

	void setPerformanceScore(double performanceScore) {
		this->performanceScore = performanceScore;
	}


	int getEmployeeId() {
		return employeeid;
	}

	string getName() {
		return name;
	}

	string getLastName() {
		return lastname;
	}

	string getEmail() {
		return email;
	}

	string getPhoneNumber() {
		return phoneNumber;
	}

	string getPosition() {
		return position;
	}

	int getDepartmentId() {
		return departmentId;
	}

	double getSalary() {
		return salary;
	}

	double getPerformanceScore() {
		return performanceScore;
	}

};

class EmployeeManagement {

private:

	vector<Employee> employees;

public:

	void addEmployee(int employeeid,string name,string lastname,string mail,string phoneNumber,string position,int departmentid) {

		Employee e(employeeid,name, lastname, mail, phoneNumber, position, departmentid );
		employees.push_back(e);

	}

	void addSalaryById(int id, double amount) {

		for (int i = 0; i < employees.size(); i++) {

			if (employees[i].getEmployeeId() == id) {

				double newSalary = employees[i].getSalary() + amount;
				employees[i].setSalary(newSalary);

				cout << employees[i].getName() << " "
				     << employees[i].getLastName()
				     << "'s salary: "
				     << employees[i].getSalary() << " TL\n";
				return;
			}
		}

		cout << "Employee not found!\n";
	}

	void addPerformanceScore(int id,double score) {

		for(int i = 0; i<employees.size(); i++) {

			if(employees[i].getEmployeeId() == id) {

				employees[i].setPerformanceScore(score);
			}

			cout<<"Employee's performance score has been set successfully!";
			return;
		}

		cout<<"Employee not found!";
	}

	void applyPerformanceScore(int id) {

		for(int i = 0; i<employees.size(); i++) {

			if(employees[i].getEmployeeId() == id) {

				employees[i].setSalary(
				    employees[i].getSalary() +
				    (employees[i].getSalary() * employees[i].getPerformanceScore()) / 150
				);
			}

			cout<<employees[i].getName()<<" "<<employees[i].getLastName()<<" "<<"'s performance applied with score:"<<" "<<employees[i].getPerformanceScore();
			cout<<"Total Salary with Bonus: "<<employees[i].getSalary()<<" "<<"TL";
			return;
		}

		cout<<"Employee not found!";
	}

	void updateEmail(int id,string newmail) {

		for(int i = 0; i<employees.size(); i++) {

			if(employees[i].getEmployeeId() == id) {

				employees[i].setEmail(newmail);
			}

			cout<<"New e-mail has been updated!"<<" "<<employees[i].getEmail();
			return;

		}
		cout<<"Employee not found!";
	}

	void updatePhone(int id,string newphone) {

		for(int i = 0; i<employees.size(); i++) {

			if(employees[i].getEmployeeId() == id) {

				employees[i].setPhoneNumber(newphone);
			}

			cout<<"New phone number has been updated!"<<" "<<employees[i].getPhoneNumber();
			return;

		}
		cout<<"Employee not found!";
	}

	void updatePosition(int id,string newposition) {

		for(int i = 0; i<employees.size(); i++) {

			if(employees[i].getEmployeeId() == id) {

				employees[i].setPosition(newposition);
			}

			cout<<"New e-mail has been updated!"<<" "<<employees[i].getPosition();
			return;

		}
		cout<<"Employee not found!";
	}

	void updatePerformanceScore(int id,double newscore) {

		for(int i = 0; i<employees.size(); i++) {

			if(employees[i].getEmployeeId() == id) {

				employees[i].setPerformanceScore(newscore);
			}

			cout<<"New Performance Score has been updated!"<<" "<<employees[i].getPerformanceScore();
			return;

		}
		cout<<"Employee not found!";
	}

	void giveRaise(int id,double amount) {

		for(int i = 0; i<employees.size(); i++) {

			if(employees[i].getEmployeeId() == id) {

				employees[i].setSalary(employees[i].getSalary() + amount);
			}
			cout<<"New salary has been increased!"<<" "<<employees[i].getSalary()<<" "<<"TL";
			return;
		}
		cout<<"Employee not found!";
	}

	void giveDeduct(int id,double amount) {

		for(int i = 0; i<employees.size(); i++) {

			if(employees[i].getEmployeeId() == id) {

				employees[i].setSalary(employees[i].getSalary() - amount);
			}
			cout<<"New salary has been decreased!"<<" "<<employees[i].getSalary()<<" "<<"TL";
			return;
		}
		cout<<"Employee not found!";
	}

	void searchEmployee(int id) {

		if(employees.size() == 0) {
			cout<<"Employee not found!";
		}
		else {

			for(int i = 0; i<employees.size(); i++) {

				if(employees[i].getEmployeeId() == id) {

					cout<<"ID: "<<employees[i].getEmployeeId();
					cout<<"\nName: "<<employees[i].getName();
					cout<<"\nLast Name: "<<employees[i].getLastName();
					cout<<"\nDepartment: "<<employees[i].getDepartmentId();
					cout<<"\nSalary: "<<employees[i].getSalary();
					cout<<"\nPosition: "<<employees[i].getPosition();
					cout<<"\nPhone Number: "<<employees[i].getPhoneNumber();
					cout<<"\nE-Mail: "<<employees[i].getEmail();
					cout<<"\nPerformance Score: "<<employees[i].getPerformanceScore();
				}

				return;
			}
		}
	}

	void removeEmployee(int id) {

		for(int i = 0; i<employees.size(); i++) {
			if(employees[i].getEmployeeId() == id) {
				employees.erase(employees.begin() + i);
				cout<<"Employee removed!\n";
				return;
			}
		}
		cout<<"Employee not found!";
	}

	void searchEmployeebyName(string name,string lastname) {


		if(employees.size() == 0) {
			cout<<"Employee not found!";
		}
		else {

			for(int i = 0; i<employees.size(); i++) {

				if(employees[i].getName() == name && employees[i].getLastName() == lastname) {

					cout<<"ID: "<<employees[i].getEmployeeId();
					cout<<"\nName: "<<employees[i].getName();
					cout<<"\nLast Name: "<<employees[i].getLastName();
					cout<<"\nDepartment: "<<employees[i].getDepartmentId();
					cout<<"\nSalary: "<<employees[i].getSalary();
					cout<<"\nPosition: "<<employees[i].getPosition();
					cout<<"\nPhone Number: "<<employees[i].getPhoneNumber();
					cout<<"\nE-Mail: "<<employees[i].getEmail();
					cout<<"\nPerformance Score: "<<employees[i].getPerformanceScore();
				}

				return;
			}
		}
	}

	void removeEmployeebyName(string name,string lastname) {

		for(int i = 0; i<employees.size(); i++) {
			if(employees[i].getName() == name && employees[i].getLastName() == lastname) {
				employees.erase(employees.begin() + i);
				cout<<"Employee removed!\n";
				return;
			}
		}
		cout<<"Employee not found!";
	}

	void showEmployees() {

		if(employees.size() == 0) {

			cout<<"No employee(s) found. Add a employee first!";
		}

		else {
			for(int i = 0; i<employees.size(); i++) {

				if(employees[i].getSalary() == 0) {

					cout<<"Add a salary to this employee!";
				}
				else {

					cout<<"Employee Info "<<(i+1)<<":";
					cout<<"\nID: "<<employees[i].getEmployeeId();
					cout<<"\nName: "<<employees[i].getName();
					cout<<"\nLast Name: "<<employees[i].getLastName();
					cout<<"\nDepartment: "<<employees[i].getDepartmentId();
					cout<<"\nSalary: "<<employees[i].getSalary();
					cout<<"\nPosition: "<<employees[i].getPosition();
					cout<<"\nPhone Number: "<<employees[i].getPhoneNumber();
					cout<<"\nE-Mail: "<<employees[i].getEmail();
					cout<<"\nPerformance Score: "<<employees[i].getPerformanceScore();
				}
			}
		}
	}
};


int main() {

	srand(time(NULL));

	int empid,depid;

	EmployeeManagement e;

	while (true) {

		cout << "\n========== EMPLOYEE MANAGEMENT SYSTEM ==========\n";
		cout << "1 -> Add Employee\n";
		cout << "2 -> Add Salary\n";
		cout << "3 -> Search Employee by ID\n";
		cout << "4 -> Remove Employee by ID\n";
		cout << "5 -> Search Employee by Name & Lastname\n";
		cout << "6 -> Remove Employee by Name & Lastname\n";
		cout << "7 -> Add Performance Score\n";
		cout << "8 -> Increase Salary by Performance\n";
		cout << "9 -> Update Employee's E-Mail\n";
		cout << "10 -> Update Employee's Phone Number\n";
		cout << "11 -> Update Employee's Position\n";
		cout << "12 -> Update Employee's Performance Score\n";
		cout << "13 -> Give Raise to Salary\n";
		cout << "14 -> Give Deduct to Salary\n";
		cout << "15 -> Show All Employees\n";
		cout << "0 -> Exit\n";
		cout << "===============================================\n";
		cout << "Your choice: ";

		int choice;
		cin >> choice;

		switch (choice) {

		case 1: {

			cout<<"\nEnter Employee Name: "<<endl;
			string name;
			cin.ignore();
			getline(cin,name);

			cout<<"Enter Employee Lastname: "<<endl;
			string lastname;
			cin>>lastname;

			cout<<"Enter Employee Mail: "<<endl;
			string mail;
			cin>>mail;

			cout<<"Enter Employee Phone Number: "<<endl;
			string num;
			cin>>num;

			cout<<"Enter Employee Position: "<<endl;
			string pos;
			cin>>pos;

			empid = rand()%(999999)+1;
			depid = rand()%(999999)+1;

			cout<<"Employee Created!";
			cout<<"\nID: "<<empid<<"\nName: "<<name<<"\nLast Name: "<<lastname<<"\nE-Mail: "<<mail<<"\nPhone Number: "<<num<<"\nPosition: "<<pos<<"\nDepartment ID: "<<depid;

			e.addEmployee(empid,name,lastname,mail,num,pos,depid);

			break;
		}

		case 2: {

			cout<<"Enter Employee's ID: ";
			int id;
			cin>>id;

			cout<<"Enter Amount of Salary: ";
			double salary;
			cin>>salary;

			e.addSalaryById(id,salary);

			break;
		}

		case 3: {

			cout<<"Enter Employee's ID: ";
			int id;
			cin>>id;

			e.searchEmployee(id);

			break;
		}

		case 4: {

			cout<<"Enter Employee's ID: ";
			int id;
			cin>>id;

			e.removeEmployee(id);

			break;
		}
		
		case 5: {
		    
		    cout<<"Enter Employee Name: ";
		    string name;
		    cin>>name;
		    
		    cout<<"Enter Employee Lastname: ";
		    string lastname;
		    cin>>lastname;
		    
		    e.searchEmployeebyName(name,lastname);
		    
		    break;
		}
		
		case 6: {
		    
		    cout<<"Enter Employee Name: ";
		    string name;
		    cin>>name;
		    
		    cout<<"Enter Employee Lastname: ";
		    string lastname;
		    cin>>lastname;
		    
		    e.removeEmployeebyName(name,lastname);
		    
		    break;
		}

		case 7: {

			cout<<"Enter Employee's ID: ";
			int id;
			cin>>id;

			cout<<"Enter Employee's Score: ";
			double score;
			cin>>score;

			e.addPerformanceScore(id,score);

			break;
		}

		case 8: {

			cout<<"Enter Employee's ID: ";
			int id;
			cin>>id;

			e.applyPerformanceScore(id);

			break;
		}

		case 9: {

			cout<<"Enter Employee's ID: ";
			int id;
			cin>>id;

			cout<<"Enter Employee's new Mail: ";
			string newmail;
			cin>>newmail;

			e.updateEmail(id,newmail);

			break;
		}

		case 10: {

			cout<<"Enter Employee's ID: ";
			int id;
			cin>>id;

			cout<<"Enter Employee's new Phone Number: ";
			string newphone;
			cin>>newphone;

			e.updatePhone(id,newphone);

			break;
		}

		case 11: {

			cout<<"Enter Employee's ID: ";
			int id;
			cin>>id;

			cout<<"Enter Employee's new Position: ";
			string newpos;
			cin>>newpos;

			e.updatePosition(id,newpos);

			break;
		}

		case 12: {

			cout<<"Enter Employee's ID: ";
			int id;
			cin>>id;

			cout<<"Enter Employee's new Performance score: ";
			double score;
			cin>>score;

			e.updatePerformanceScore(id,score);

			break;
		}

		case 13: {

			cout<<"Enter Employee's ID: ";
			int id;
			cin>>id;

			cout<<"Enter amount of Raise: ";
			double amount;
			cin>>amount;

			e.giveRaise(id,amount);

			break;
		}

		case 14: {

			cout<<"Enter Employee's ID: ";
			int id;
			cin>>id;

			cout<<"Enter amount of Deduct: ";
			double amount;
			cin>>amount;

			e.giveDeduct(id,amount);

			break;
		}

		case 15: {

			e.showEmployees();

			break;
		}

		case 0:
			cout << "Exiting the system... Goodbye!\n";

			return 0;

		default:
			cout << "Invalid choice! Please select between 0-15.\n";
			break;
		}
	}

	return 0;
}
