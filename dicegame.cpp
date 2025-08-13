#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    
srand(time(NULL));

int dice,number,i,result=0;

cout<<"Enter the number of dice to roll: ";

  cin>>number;

cout<<"Rolling"<<" "<<number<<" "<<"dice..."<<endl;

for (i=1;i<=number;i++){

    dice=rand()%(7-1)+1;
    
    cout<<i<<". "<<"dice is: "<<" "<<dice<<endl;
    
    result+=dice;
    
    }
  
cout<<"Total sum is: "<<result<<endl;
    
}


    
