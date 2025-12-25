#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));

	double result = 0;
	double hometax = 0;
	double discount = 0;
	double business_tax = 0;
	double creditcardtax = 0;
	double cashdiscount = 0;
	string name,customer_type,payment_method;
	double water_usage;
	int id;

	id = rand()%(99999)+1;

	cout<<"Please enter your name: ";
	cin>>name;

	cout<<"Enter customer type (home/business): "<<endl;
	cin>>customer_type;

	cout<<"Enter payment method (cash/credit card): "<<endl;
	cin>>payment_method;

	cout<<"Enter water usage as mB3 (1mB3 water = 5 TL): "<<endl;
	cin>>water_usage;

	if(water_usage >= 50 && customer_type == "business")  {

		business_tax = (water_usage)*0.2;
		result += (water_usage*5) + business_tax;
	}

	else if(water_usage >= 50 && customer_type == "home") {

		hometax = (water_usage)*0.1;
		result += (water_usage*5) + hometax;
	}

	else {

		result += (water_usage*5);
	}

	if (result > 1000 && payment_method == "cash") {
		cashdiscount = ((water_usage) * 5) * 0.02;
		discount = ((water_usage) * 5) * 0.05;
		result -= discount + cashdiscount;
	}

	else if (result > 1000 && payment_method == "credit card") {
		discount = ((water_usage) * 5) * 0.05;
		creditcardtax = ((water_usage) * 5) * 0.02;
		result = result - discount + creditcardtax;
	}

	cout<<"\n-------------------------------"<<endl;
	cout<<"Customer Name: "<<name<<endl;
	cout<<"Subscription ID: "<<id<<endl;
	cout<<"Customer Type: "<<customer_type<<endl;
	cout<<"Payment Method: "<<payment_method<<endl;

	cout<<"Base Total: "<<(water_usage*5)<<" "<<"TL"<<endl;
	cout<<"Home Tax(%10): "<<"+"<<hometax<<" "<<"TL"<<endl;
	cout<<"Business Tax(%20): "<<"+"<<business_tax<<" "<<"TL"<<endl;
	cout<<"Discount For Over 1000 TL (%5): "<<"-"<<discount<<" "<<"TL"<<endl;
	cout<<"Credit Card Fee(%2): "<<"+"<<creditcardtax<<" "<<"TL"<<endl;
	cout<<"Cash Discount(%2): "<<"-"<<cashdiscount<<" "<<"TL"<<endl;
	cout<<"-------------------------------"<<endl;

	cout<<"Final Total: "<<result<<" "<<"TL"<<endl;
	cout<<"Thank you for choosing our service!"<<endl;

	return 0;

}
