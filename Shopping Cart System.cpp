#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	vector <string> products;
	vector <double> prices;
	vector <int> quantity;

	double result = 0;
	int choice;

	while(true) {

		cout<<"\n----------------MENU---------------";
		cout<<"\n1. Add Product"<<endl;
		cout<<"2. View Card"<<endl;
		cout<<"3. Remove Product"<<endl;
		cout<<"4. Show Total"<<endl;
		cout<<"5. Clear Card"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"-------------------------------------";

		cout<<"\nChoice: ";
		cin>>choice;

		if(choice == 0) {

			cout<<"Exiting the System... Goodbye!";
			break;
		}

		switch(choice) {

		case 1: {

			cout<<"Enter product name: ";
			string name;
			cin>>name;
			products.push_back(name);

			cout<<"How many would you like to buy?";
			int amount;
			cin>>amount;
			quantity.push_back(amount);

			cout<<"Enter product's price: ";
			double p;
			cin>>p;
			prices.push_back(p);
			result += (p*amount);

			cout<<"Item added successfully!";
			break;
		}

		case 2: {

			if(products.size() == 0) {

				cout<<"\nThere is no item in your cart yet !";
				cout<<"\nPlease add item first !";
			}

			else {

				for(int i = 0; i<products.size(); i++) {

					cout<<(i+1)<<"."<<" "<<products[i]<<" "<<"-"<<" "<<prices[i]<<"*"<<quantity[i]<<"="<<(prices[i]*quantity[i])<<" "<<"TL";

				}
			}

			break;
		}

		case 3: {

			if (products.size() == 0) {
				cout << "Cart is empty!\n";
				break;
			}

			cout << "Enter product name to remove: ";
			string name;
			cin >> name;

			for (int i = 0; i < products.size(); i++) {

				if (products[i] == name) {
					products.erase(products.begin() + i);
					prices.erase(prices.begin() + i);
					quantity.erase(quantity.begin() + i);
					cout << "Product removed successfully!\n";
					break;
				}

			}

			break;
		}

		case 4: {

			for(int i = 0; i<products.size(); i++) {

				cout<<"Total Price: "<<prices[i]<<" "<<"TL";
			}

			break;
		}

		case 5: {

			products.clear();
			quantity.clear();
			prices.clear();
			result = 0;

			break;
		}
		
		    default:
		    cout<<"Invalid Choice!";
		    break;
		}
	}
	return 0;
}
