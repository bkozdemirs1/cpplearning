#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
	string owner;
	double balance;

public:
	BankAccount() {
		owner = "";
		balance = 0;
	}

	BankAccount(string owner, double balance) {
		this->owner = owner;
		this->balance = balance;
	}

	void deposit(double amount) {
		if (amount <= 0)
			return;
		balance += amount;
		cout<<"Current Balance: "<<balance<<endl;

	}

	void withdraw(double a) {
		if (a <= 0) {
			cout << "Invalid amount!" << endl;
			return;
		}

		if (balance >= a) {
			balance -= a;
			cout << "Your money has been successfully withdrawn." << endl;
			cout << "Current Balance: " << balance << endl;
		} else {
			cout << "Insufficient Funds!" << endl;
		}
	}

	void show() {
		cout << "Owner: " << owner << endl;
		cout << "Balance: " << balance << endl;
	}
};

int main() {

	BankAccount acc;
	bool accountCreated = false;

	string name;
	double balance, amount;
	int choice;

	while (true) {

		cout<<"========== BANK ACCOUNT SYSTEM =========="<<endl;
		cout<<"1. Create Account"<<endl;
		cout<<"2. Deposit Money"<<endl;
		cout<<"3. Withdraw Money"<<endl;
		cout<<"4. Show Account Info"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"========================================"<<endl;
		cout<<"Enter your choice: ";
		cin >> choice;

		switch (choice) {

		case 1:
			cout << "Enter name: ";
			cin.ignore();
			getline(cin, name);

			cout << "Enter balance: ";
			cin >> balance;

			acc = BankAccount(name, balance);
			accountCreated = true;
			cout << "Account created!\n";
			break;

		case 2:
			if (!accountCreated) {
				cout << "Create account first!\n";
				break;
			}

			cout << "Enter amount: ";
			cin >> amount;

			acc.deposit(amount);
			break;

		case 3:
			if (!accountCreated) {
				cout << "Create account first!\n";
				break;
			}

			cout<<"Enter amount: ";
			cin>>amount;

			acc.withdraw(amount);
			break;

		case 4:
			if (!accountCreated) {
				cout << "Create account first!\n";
				break;
			}

			acc.show();
			break;

		case 0:

			cout << "System is shutting down...Goodbye!\n";
			return 0;

		default:
			cout<<"Please enter a number between 0-4!";
			break;
		}
	}
}
