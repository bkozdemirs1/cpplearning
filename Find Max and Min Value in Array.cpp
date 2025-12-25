#include <iostream>

using namespace std;

int main()
{
	int arrsize;

	cout<<"Please enter your array size: ";
	cin>>arrsize;

	int arr[arrsize];


	cout<<"Enter your values ";

	for(int i = 0; i<arrsize; i++) {

		cout<<"\nElement "<<(i+1)<<":";
		cin>>arr[i];

	}

	int max = arr[0];
	int min = arr[0];

	for(int i = 0; i<arrsize; i++) {
		
		if(arr[i] > max) {
			max = arr[i];
		}

		if(min > arr[i]) {
			min = arr[i];
		}
	}

	cout<<"Max Value: "<<max<<endl;
	cout<<"Min Value: "<<min<<endl;

	return 0;

}
