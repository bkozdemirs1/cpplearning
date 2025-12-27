#include <iostream>
using namespace std;

int main() {
    
    int number, factorial = 1, i;
    
    cout<<"Enter your number: ";
    cin>>number;
    
    for(i = 1; i<=number; i++) {
        factorial*=i;
        cout<<"\n"<<i<<"!"<<" "<<"="<<" "<<factorial;
    }
    return 0;
}
