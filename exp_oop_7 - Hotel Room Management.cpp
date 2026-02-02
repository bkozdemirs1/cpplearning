#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Customer {

private:

	int customerId;
	string name;
	string lastName;
	string phoneNumber;
	string mail;

public:

	Customer(int customerId,string name,string lastName,string phoneNumber,string mail) {

		this->customerId = customerId;
		this->name = name;
		this->lastName = lastName;
		this->phoneNumber = phoneNumber;
		this->mail = mail;

	}

	void setName(string n) {
		this->name = n;
	}

	void setID(int i) {
		this->customerId = i;
	}

	void setLastName(string ln) {
		this->lastName = ln;
	}

	void setPhoneNum(string p) {
		this->phoneNumber = p;
	}

	void setMail(string m) {
		this->mail = m;
	}

	string getName() {
		return name;
	}

	string getLastName() {
		return lastName;
	}

	int getID() {
		return customerId;
	}

	string getPhoneNumber() {
		return phoneNumber;
	}

	string getMail() {
		return mail;
	}

};

class Room {

private:

	int roomNumber;
	string roomType;
	double pricePerNight;
	bool isAvailable;


public:

	Room(int roomNumber,string roomType,double pricePerNight) {

		this->roomNumber = roomNumber;
		this->roomType = roomType;
		this->pricePerNight = pricePerNight;
		this->isAvailable = true;

	}

	void setroomNumber(int r) {
		this->roomNumber = r;
	}

	void setroomType(string t) {
		this->roomType = t;
	}

	void setPricePerNight(double p) {
		this->pricePerNight = p;
	}


	int getroomNumber() {
		return roomNumber;
	}

	string getroomType() {
		return roomType;
	}

	double getPricePerNight() {
		return pricePerNight;
	}

	bool getStatus() {
		return isAvailable;
	}

	void setStatus(bool status) {
		isAvailable = status;
	}


};

class Reservation {

private:

	int reservationId;
	int customerId;
	int roomNumber;
	string checkInDate;
	string checkOutDate;

public:

	Reservation(int customerId,	int roomNumber,	string checkInDate,	string checkOutDate) {

		this->customerId = customerId;
		this->roomNumber = roomNumber;
		this->checkInDate = checkInDate;
		this->checkOutDate = checkOutDate;

	}

	void setID(int i) {
		this->customerId = i;
	}

	int getID() {
		return customerId;
	}

	void setroomNumber(int r) {
		this->roomNumber = r;
	}

	int getroomNumber() {
		return roomNumber;
	}

	void setrID(int rid) {
		this->reservationId = rid;
	}

	int getrID() {
		return reservationId;
	}

	void setCheckIn(string chi) {
		this->checkInDate = chi;
	}

	string getCheckIn() {
		return checkInDate;
	}

	void setCheckOut(string cho) {
		this->checkOutDate = cho;
	}

	string getCheckOut() {
		return checkOutDate;
	}

};

class HotelManagement {

private:

	vector<Customer> customers;
	vector<Room> rooms;
	vector<Reservation> reservations;

public:

	void addCustomer(int customerId,string name,string lastName,string phoneNumber,string mail) {

		Customer c(customerId, name, lastName, phoneNumber, mail);
		cout<<"\nCustomer Created!";
		customers.push_back(c);
	}

	void addRoom(int roomNumber,string roomType,double pricePerNight) {

		Room r(roomNumber, roomType, pricePerNight);
		cout<<"\nRoom added successfully!";
		rooms.push_back(r);

	}

	void createReservation(int customerId,int roomNumber,string checkInDate,string checkOutDate) {

		bool isavailable = false;

		for(Room a:rooms) {
			if(a.getroomNumber() == roomNumber) {
				isavailable = true;
				break;
			}
		}

		if(!isavailable) {
			cout<<"Room not found!\n";
			return;
		}

		for(Reservation r:reservations) {
			if(r.getroomNumber() == roomNumber && r.getCheckIn() == checkInDate && r.getCheckOut() == checkOutDate) {
				cout<<"\nThis room is already reserved for selected dates!";
				return;
			}
		}

		for(int i=0; i<rooms.size(); i++) {
			if(rooms[i].getroomNumber() == roomNumber) {
				rooms[i].setStatus(false);
				break;
			}
		}

		int reservationId = rand() % 2000+1000;
		Reservation r(customerId, roomNumber, checkInDate, checkOutDate);
		r.setrID(reservationId);
		reservations.push_back(r);
		cout<<"Reservation created successfully!\n";
		cout << "\nReservation ID: " << reservationId;

	}

	void showAllCustomers() {

		for(int i=0; i<customers.size(); i++) {
			cout<<"\nName: "<<customers[i].getName();
			cout<<"\nLastname: "<<customers[i].getLastName();
			cout<<"\nPhone Number: "<<customers[i].getPhoneNumber();
			cout<<"\nMail: "<<customers[i].getMail();
		}
	}

	void showAllRooms() {

		for(int i=0; i<rooms.size(); i++) {
			cout<<"\nRoom Number: "<<rooms[i].getroomNumber();
			cout<<"\nRoom Type: "<<rooms[i].getroomType();
			cout<<"\nPrice: "<<rooms[i].getPricePerNight();
			if(rooms[i].getStatus() == true) {
				cout<<"\nAvailable";
			}
			else {
				cout<<"\nReserved";
			}
		}
	}

	void showReservationsbyCustomer(int c_id) {
		for(int i=0; i<reservations.size(); i++) {
			if(reservations[i].getID() == c_id) {
				cout << "\nReservation ID: "<<reservations[i].getrID();
				cout << "\nRoom Number: "<<reservations[i].getroomNumber();
				cout << "\nCheck-in: "<<reservations[i].getCheckIn();
				cout << "\nCheck-Out: "<<reservations[i].getCheckOut();
				return;
			}
		}
		cout << "\nNo reservation found for this customer!";

	}

	void showReservationsbyRoom(int roomnum) {
		for(int i=0; i<reservations.size(); i++) {
			if(reservations[i].getroomNumber() == roomnum) {
				cout << "\nReservation ID: "<<reservations[i].getrID();
				cout << "\nCustomer ID: "<<reservations[i].getID();
				cout << "\nCheck-in: "<<reservations[i].getCheckIn();
				cout << "\nCheck-Out: "<<reservations[i].getCheckOut();
				return;
			}
		}
		cout << "\nNo reservation found for this room!";
	}

	void removeCustomerbyID(int id) {

		for(int i = 0; i<customers.size(); i++) {
			if(customers[i].getID() == id) {
				customers.erase(customers.begin() + i);
				cout<<"Customer removed!\n";
				return;
			}
		}
		cout<<"\nCustomer not found!";
	}

	void removeRoombyRoomNumber(int roomnum) {

		for(int i = 0; i<rooms.size(); i++) {
			if(rooms[i].getroomNumber() == roomnum) {
				rooms.erase(rooms.begin() + i);
				cout<<"Room removed!\n";
				return;
			}
		}
		cout<<"\nRoom not found!";
	}

	void searchCustomerbyID(int customerid) {

		for(int i=0; i<customers.size(); i++) {
			if(customers[i].getID() == customerid) {
				cout<<"\nName: "<<customers[i].getName();
				cout<<"\nLastname: "<<customers[i].getLastName();
				cout<<"\nPhone Number: "<<customers[i].getPhoneNumber();
				cout<<"\nMail: "<<customers[i].getMail();
				return;
			}
		}
		cout<<"\nCustomer not found!";
	}

	void searchRoombyRoomNumber(int roomnum) {

		for(int i=0; i<rooms.size(); i++) {
			if(rooms[i].getroomNumber() == roomnum) {
				cout<<"\nRoom Number: "<<rooms[i].getroomNumber();
				cout<<"\nRoom Type: "<<rooms[i].getroomType();
				cout<<"\nPrice: "<<rooms[i].getPricePerNight();
				if(rooms[i].getStatus() == true) {
					cout<<"\nAvailable";
				}
				else {
					cout<<"\nReserved";
				}
				return;
			}
		}
		cout<<"\nRoom not found!";
	}



	void searchCustomerbyName(string name, string lastname) {

		for(int i=0; i<customers.size(); i++) {
			if(customers[i].getName() == name && customers[i].getLastName() == lastname) {
				cout<<"\nName: "<<customers[i].getName();
				cout<<"\nLastname: "<<customers[i].getLastName();
				cout<<"\nPhone Number: "<<customers[i].getPhoneNumber();
				cout<<"\nMail: "<<customers[i].getMail();
				return;
			}
		}
		cout<<"\nCustomer not found!";
	}

	void removeCustomerbyName(string name, string lastname) {

		for(int i=0; i<customers.size(); i++) {
			if(customers[i].getName() == name && customers[i].getLastName() == lastname) {
				customers.erase(customers.begin() + i);
				cout<<"Customer removed!";
				return;
			}
		}
		cout<<"Customer not found!";
	}

};


int main() {

	srand(time(NULL));

	HotelManagement h;

	while(true) {

		cout << "\n========== HOTEL RESERVATION SYSTEM ==========";
		cout << "\n 1 -> Add Customer";
		cout << "\n 2 -> Add Room";
		cout << "\n 3 -> Create Reservation";
		cout << "\n 4 -> Show All Customers";
		cout << "\n 5 -> Show All Rooms";
		cout << "\n 6 -> Show Reservations by Customer";
		cout << "\n 7 -> Show Reservations by Room";
		cout << "\n 8 -> Remove Customer";
		cout << "\n 9 -> Remove Room";
		cout << "\n 10 -> Search Customer by ID";
		cout << "\n 11 -> Search Room by Number";
		cout << "\n 12 -> Search Customer by Name";
		cout << "\n 13 -> Remove Customer by Name";
		cout << "\n 0 -> Exit";
		cout << "\n==============================================";

		cout << "\n\nMake your choice: ";
		int choice;
		cin >> choice;

		if (choice == 0) {
			cout << "System is shutting down... Goodbye!\n";
			break;
		}

		switch(choice) {

		case 1: {

			int id;
			string name, lastname, phone,mail;

			cout << "Enter Customer Name: ";
			cin.ignore();
			getline(cin, name);

			cout << "Enter Customer Last Name: ";
			getline(cin, lastname);

			cout << "Enter Phone Number: ";
			cin >> phone;

			cout << "Enter E-Mail: ";
			cin >> mail;

			id = rand() % 123 + 456;

			h.addCustomer(id,name,lastname,phone,mail);
			cout << "\nCustomer ID: " << id;
			break;

		}

		case 2: {

			int roomnumber;
			string type;
			double price;

			cout << "Enter Room Number: ";
			cin >> roomnumber;

			cout << "Enter Type of Room: ";
			cin >> type;

			cout << "Enter price of Room: ";
			cin >> price;

			h.addRoom(roomnumber,type,price);
			cout << "\nRoom Number: " << roomnumber;
			break;
		}

		case 3: {

			int c_id, roomnum;
			string c_in, c_out;

			cout << "Enter Customer ID: ";
			cin >> c_id;

			cout << "Enter Room Number: ";
			cin >> roomnum;

			cout << "Enter Check-in Date (DD/MM/YYYY): ";
			cin >> c_in;

			cout << "Enter Check-out Date (DD/MM/YYYY): ";
			cin >> c_out;

			h.createReservation(c_id, roomnum, c_in, c_out);
			break;

		}

		case 4: {

			h.showAllCustomers();
			break;
		}

		case 5: {

			h.showAllRooms();
			break;
		}

		case 6: {

			int customerId;
			cout << "Enter customer ID: ";
			cin >> customerId;

			h.showReservationsbyCustomer(customerId);
			break;
		}

		case 7: {

			int roomNo;
			cout << "Enter room number: ";
			cin >> roomNo;

			h.showReservationsbyRoom(roomNo);
			break;
		}

		case 8: {

			int customerId;
			cout << "Enter customer ID to remove: ";
			cin >> customerId;

			h.removeCustomerbyID(customerId);
			break;
		}

		case 9: {

			int roomNo;
			cout << "Enter room number to remove: ";
			cin >> roomNo;

			h.removeRoombyRoomNumber(roomNo);
			break;
		}

		case 10: {

			int customerId;
			cout << "Enter customer ID to search: ";
			cin >> customerId;

			h.searchCustomerbyID(customerId);
			break;
		}

		case 11: {

			int roomNo;
			cout << "Enter room number to search: ";
			cin >> roomNo;

			h.searchRoombyRoomNumber(roomNo);
			break;
		}

		case 12: {

			string name, lastname;

			cout << "Enter customer name: ";
			cin.ignore();
			getline(cin, name);

			cout << "Enter customer lastname: ";
			cin >> lastname;

			h.searchCustomerbyName(name, lastname);
			break;
		}

		case 13: {

			string name, lastname;

			cout << "Enter customer name: ";
			cin.ignore();
			getline(cin, name);

			cout << "Enter customer lastname: ";
			cin >> lastname;

			h.removeCustomerbyName(name, lastname);
			break;
		}

		default:
			cout << "Invalid choice! Please select a valid option. (1-13)";
			break;
		}
	}
}
