#include <iostream>
using namespace std;

int main()
{
	bool isprime = true;

	int size;

	cout<<"Enter your arraysize: ";
	cin>>size;

	int numbers[size];

	cout<<"Enter your elements: ";

	for(int i = 0; i<size; i++) {

		cout<<"\nElement"<<" "<<(i+1)<<"=";
		cin>>numbers[i];
	}

	for(int num:numbers) {

		isprime = true;

		if(num<0) {
			isprime = false;
		}

		else if(num == 1) {
			isprime = false;
		}

		else {

			for(int i = 2; i<num; i++) {
				if(num % i == 0) {
					isprime = false;
					break;
				}
			}
		}

		if(isprime == true) {
			cout<<"Prime Number: "<<num<<endl;
		}
		else {
			cout<<"Non-Prime Number: "<<num<<endl;
		}
	}

	return 0;
}
