#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Patient {

private:

	int patientId;

	string p_name;

	string p_lastname;

	int age;

	string illness;

public:

	Patient(int patientId,string p_name,string p_lastname,int age,string illness) {

		this->patientId = patientId;
		this->p_name = p_name;
		this->p_lastname = p_lastname;
		this->age = age;
		this->illness = illness;

	}

	void setPatientID(int id) {
		this->patientId = id;
	}

	void setPatientName(string name) {
		this->p_name = name;
	}

	void setPatientLastName(string lname) {
		this->p_lastname = lname;
	}

	void setAge(int age) {
		this->age = age;
	}

	void setIllness(string illness) {
		this->illness = illness;
	}


	int getPatientID() {
		return patientId;
	}

	string getPatientName() {
		return p_name;
	}

	string getPatientLastName() {
		return p_lastname;
	}

	int getPatientAge() {
		return age;
	}

	string getPatientIll() {
		return illness;
	}

};

class Doctor {

private:

	int doctorId;

	string d_name;

	string d_lastname;

	string department;

public:

	Doctor(int doctorId,string d_name,string d_lastname,string department) {

		this->doctorId = doctorId;
		this->d_name = d_name;
		this->d_lastname = d_lastname;
		this->department = department;

	}

	void setDoctorName(string name) {
		this->d_name = name;
	}

	void setDoctorLastName(string lname) {
		this->d_lastname = lname;
	}

	void setDepartment(string department) {
		this->department = department;
	}

	void setDoctorID(int id) {
		this->doctorId = id;
	}

	string getDoctorName() {
		return d_name;
	}

	string getDoctorLastName() {
		return d_lastname;
	}

	string getDepartment() {
		return department;
	}

	int getDoctorID() {
		return doctorId;
	}
};

class Appointment {

private:

	int appointmentId;

	int patientId;

	int doctorId;

	string date;

	string time;

public:

	Appointment(int appointmentId, int patientId, int doctorId, string date, string time) {

		this->appointmentId = appointmentId;
		this->patientId = patientId;
		this->doctorId = doctorId;
		this->date = date;
		this->time = time;
	}

	void setAppointmentId(int id) {
		this->appointmentId = id;
	}

	void setPatientId(int id) {
		this->patientId = id;
	}

	void setDoctorId(int id) {
		this->doctorId = id;
	}

	void setDate(string d) {
		this->date = d;
	}

	void setTime(string t) {
		this->time = t;
	}

	int getAppointmentID() {
		return appointmentId;
	}

	int getPatientID() {
		return patientId;
	}

	int getDoctorID() {
		return doctorId;
	}

	string getDate() {
		return date;
	}

	string getTime() {
		return time;
	}

};

class HospitalManagement {

private:

	vector<Patient> patients;

	vector<Doctor> doctors;

	vector<Appointment> appointments;

public:

	void addPatient(int patientId, string p_name, string p_lastname, int age, string illness) {

		Patient p(patientId, p_name, p_lastname, age, illness);

		patients.push_back(p);
	}

	void addDoctor(int doctorId, string d_name, string d_lastname, string department) {

		Doctor d(doctorId, d_name, d_lastname, department);

		doctors.push_back(d);
	}

	void createAppointment(int patientId, int doctorId, string date, string time) {

		bool patientFound = false;
		bool doctorFound = false;

		for (Patient p : patients) {
			if (p.getPatientID() == patientId) {
				patientFound = true;
				break;
			}
		}


		for (Doctor d : doctors) {
			if (d.getDoctorID() == doctorId) {
				doctorFound = true;
				break;
			}
		}

		if (!patientFound || !doctorFound) {
			cout << "Patient or Doctor not found!\n";
			return;
		}

		for (Appointment a : appointments) {
			if (a.getDoctorID() == doctorId &&
			        a.getDate() == date &&
			        a.getTime() == time) {

				cout << "This doctor already has an appointment at this time!\n";
				return;
			}
		}

		int appointmentId = rand() % 9000 + 1000;

		Appointment a(appointmentId,patientId, doctorId, date, time);

		appointments.push_back(a);

		cout << "Appointment created successfully!\n";
	}

	void removePatientbyID(int id) {

		for(int i = 0; i<patients.size(); i++) {
			if(patients[i].getPatientID() == id) {
				patients.erase(patients.begin() + i);
				cout<<"Patient removed!\n";
				return;
			}
		}
		cout<<"Patient not found!";
	}

	void removeDoctorbyID(int id) {

		for(int i = 0; i<doctors.size(); i++) {
			if(doctors[i].getDoctorID() == id) {
				doctors.erase(doctors.begin() + i);
				cout<<"Doctor removed!\n";
				return;
			}
		}
		cout<<"Doctor not found!";
	}

	void searchPatientbyID(int id) {

		if(patients.size() == 0) {
			cout<<"Patient not found!";
		}

		else {

			for(int i = 0; i<patients.size(); i++) {

				if(patients[i].getPatientID() == id) {

					cout<<"ID: "<<patients[i].getPatientID();
					cout<<"\nName: "<<patients[i].getPatientName();
					cout<<"\nLast Name: "<<patients[i].getPatientLastName();
					cout<<"\nAge: "<<patients[i].getPatientAge();
					cout<<"\nIllness: "<<patients[i].getPatientIll();
					return;
				}

			}
		}
	}

	void searchDoctorbyID(int id) {

		if(doctors.size() == 0) {
			cout<<"Patient not found!";
		}

		else {

			for(int i = 0; i<doctors.size(); i++) {

				if(doctors[i].getDoctorID() == id) {

					cout<<"ID: "<<doctors[i].getDoctorID();
					cout<<"\nName: "<<doctors[i].getDoctorName();
					cout<<"\nLast Name: "<<doctors[i].getDoctorLastName();
					cout<<"\nDepartment: "<<doctors[i].getDepartment();
					return;
				}

			}
		}
	}


	void showAllPatients() {

		if(patients.size() == 0) {
			cout<<"Patient not found!";
		}

		for(int i = 0; i<patients.size(); i++) {

			cout<<"ID: "<<patients[i].getPatientID();
			cout<<"\nName: "<<patients[i].getPatientName();
			cout<<"\nLast Name: "<<patients[i].getPatientLastName();
			cout<<"\nAge: "<<patients[i].getPatientAge();
			cout<<"\nIllness: "<<patients[i].getPatientIll();

		}
	}

	void showAllDoctors() {

		if(doctors.size() == 0) {
			cout<<"Doctor not found!";
		}

		for(int i = 0; i<doctors.size(); i++) {

			cout<<"ID: "<<doctors[i].getDoctorID();
			cout<<"\nName: "<<doctors[i].getDoctorName();
			cout<<"\nLast Name: "<<doctors[i].getDoctorLastName();
			cout<<"\nDepartment: "<<doctors[i].getDepartment();

		}
	}

	void showAppointmentsByDoctor(int id) {

		bool found = false;

		for (int i = 0; i < appointments.size(); i++) {

			if (appointments[i].getDoctorID() == id) {

				cout << "\nPatient ID: " << appointments[i].getPatientID();
				cout << "\nDoctor ID: " << appointments[i].getDoctorID();
				cout << "\nDate: " << appointments[i].getDate();
				cout << "\nTime: " << appointments[i].getTime();
				cout << "\n---------------------";
				found = true;
			}
		}

		if (!found)
			cout << "No appointments found for this doctor!";
	}


	void showAppointmentsByPatient(int id) {

		bool found = false;

		for (int i = 0; i < appointments.size(); i++) {

			if (appointments[i].getPatientID() == id) {

				cout << "\nPatient ID: " << appointments[i].getPatientID();
				cout << "\nDoctor ID: " << appointments[i].getDoctorID();
				cout << "\nDate: " << appointments[i].getDate();
				cout << "\nTime: " << appointments[i].getTime();
				cout << "\n---------------------";
				found = true;
			}
		}

		if (!found)
			cout << "No appointments found for this patient!";
	}

};


int main() {

	srand(time(NULL));

	HospitalManagement h;

	while(true) {

		cout<<"\n========== HOSPITAL MANAGEMENT SYSTEM ==========";
		cout<<"\n 1 -> Add Patient";
		cout<<"\n 2 -> Add Doctor";
		cout<<"\n 3 -> Create Appointment";
		cout<<"\n 4 -> Show All Patients";
		cout<<"\n 5 -> Show All Doctors";
		cout<<"\n 6 -> Show Appointments by Doctor";
		cout<<"\n 7 -> Show Appointments by Patient";
		cout<<"\n 8 -> Remove Patient";
		cout<<"\n 9 -> Remove Doctor";
		cout<<"\n 10 -> Search Patient by ID";
		cout<<"\n 11 -> Search Doctor by ID";
		cout<<"\n 0 -> Exit";
		cout<<"\n=================================================";

		cout<<"\n\nMake your choice: ";
		int c;
		cin>>c;

		switch(c) {

		case 0: {

			cout<<"System is shutting down... Goodbye!";

			return 0;
		}

		case 1: {

			string name;
			string lastname;
			int age;
			string illness;
			int id;

			cout<<"Enter Patient Name: ";
			cin.ignore();
			getline(cin,name);

			cout<<"Enter Patient LastName: ";
			cin>>lastname;

			cout<<"Enter Age: ";
			cin>>age;

			cout<<"Enter Illness of Patient: ";
			cin>>illness;

			id = rand() % 9000 + 1000;

			h.addPatient(id,name,lastname,age,illness);

			cout<<"Patient created!"<<endl;
			cout<<"Patient ID: "<<id;
			break;
		}

		case 2: {

			string name;
			string lastname;
			string department;
			int id;

			cout<<"Enter Doctor Name: ";
			cin.ignore();
			getline(cin,name);

			cout<<"Enter Lastname: ";
			cin>>lastname;

			cout<<"Enter Department: ";
			cin>>department;

			id = rand() % 400 + 500;

			h.addDoctor(id,name,lastname,department);

			cout<<"Doctor created!"<<endl;
			cout<<"Doctor ID: "<<id;
			break;
		}

		case 3: {

			int d_id, p_id;
			string date,time;

			cout<<"Enter Patient ID: ";
			cin>>p_id;

			cout<<"Enter Doctor ID: ";
			cin>>d_id;

			cout<<"Enter appointment date (DD/MM/YYYY): ";
			cin>>date;

			cout<<"Enter appointment time (HH:MM): ";
			cin>>time;

			h.createAppointment(p_id, d_id, date, time);

			break;
		}

		case 4: {

			h.showAllPatients();
			break;
		}

		case 5: {

			h.showAllDoctors();
			break;
		}

		case 6: {

			int d_id;
			cout<<"Enter Doctor's ID for Appointment(s): ";
			cin>>d_id;

			h.showAppointmentsByDoctor(d_id);
			break;
		}

		case 7: {

			int p_id;
			cout<<"Enter Patient's ID for Appointment(s): ";
			cin>>p_id;

			h.showAppointmentsByPatient(p_id);
			break;
		}

		case 8: {

			int p_id;
			cout<<"Enter Patient's ID for Remove: ";
			cin>>p_id;

			h.removePatientbyID(p_id);
			break;
		}

		case 9: {

			int d_id;
			cout<<"Enter Doctor's ID for Remove: ";
			cin>>d_id;

			h.removeDoctorbyID(d_id);
			break;
		}

		case 10: {

			int p_id;
			cout<<"Enter Patient's ID for Search: ";
			cin>>p_id;

			h.searchPatientbyID(p_id);
			break;
		}

		case 11: {

			int d_id;
			cout<<"Enter Doctor's ID for Search: ";
			cin>>d_id;

			h.searchDoctorbyID(d_id);
			break;
		}

		default: {

			cout<<"Invalid Choice! Please make your choice between 0-11!";
			break;
		}

		}
	}

}
