#include <iostream>
#include <string>
using namespace std;

class Library {
private:
	string bookname;
	string author;
	int year;
	int howmany = 5;

public:

	Library(string bookname,string author,int year) {

		this->bookname = bookname;
		this->author = author;
		this->year = year;
	}

	void borrow(int b) {

		if((howmany-b)<0) {

			cout<<"Sorry,"<<bookname<<" "<<"is not available right now."<<endl;
		}

		else {
			cout<<b<<" "<<bookname<<"has been borrowed successfully!"<<endl;
			howmany-=b;

			cout<<"The remaining number of  books from"<<bookname<<" "<<"is: "<<howmany<<endl;

		}
	}

	void returnbook(int c) {

		cout<<bookname<<" "<<"has been returned. Thank you!"<<endl;
		howmany+=c;
		cout<<"There are total"<<" "<<howmany<<" "<<bookname<<endl;

	}

	void showInfo() {

		cout<<"Book's Info: "<<endl;
		cout<<"Title: "<<bookname<<endl;
		cout<<"Author: "<<author<<endl;
		cout<<"Year: "<<year<<endl;
		cout<<"Available Copies: "<<howmany<<endl;
	}

};

int main() {

	string name,writer;
	int date,choice;

	cout<<"Please enter your book name: "<<endl;
	cin>>name;

	cout<<"\nPlease enter your book's author: "<<endl;
	cin>>writer;

	cout<<"\nPlease enter your book's year: "<<endl;
	cin>>date;

	cout<<"\n"<<name<<" "<<"by"<<" "<<writer<<" "<<"has been created!"<<endl;

	Library b1(name,writer,date);

	cout<<"\nLibrary System Started!"<<endl;
	cout<<"\nBooks loaded into the library..."<<endl;

	while(true) {

		cout<<"\nFor borrow the book --> 1"<<endl;
		cout<<"\nFor return the book --> 2"<<endl;
		cout<<"\nFor see the book's Info --> 3"<<endl;
		cout<<"\nExit --> 0"<<endl;
		cout<<"\nPlease make your choice: ";
		cin>>choice;

		switch(choice) {

		case 1:

			cout<<"How many book you want to borrow: ";
			int a;
			cin>>a;

			b1.borrow(a);
			break;

		case 2:

			cout<<"How many book you want to return: "<<endl;
      
			int x;
			cin>>x;

			b1.returnbook(x);
			break;

		case 3:

			b1.showInfo();
			break;

		case 0:

			cout<<"Exiting the program... Goodbye! "<<endl;
			return 0;

		default:
			
			cout<<"Invalid choice! Please select 1-4!";
			break;
		}
	}
}
