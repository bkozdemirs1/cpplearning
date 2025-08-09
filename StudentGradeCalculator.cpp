#include <iostream>
using namespace std;

int main() {
 
 float grade[5]; // These values are for your points and assume these points are the same coefficient
 
 float result=0;

 cout<<"Please enter your grades: ";

for(int i=0; i<5; i++){
    
    cout << "Grade " << (i+1) << ": ";
    
    cin >> grade[i];
    
    if(grade[i] < 0 || grade[i] > 100) {
    cout << "Invalid grade! Please enter a number between 0 and 100." << endl;
    i--; 
    continue;
    
    result += grade[i]/5;
}
   
}
 cout<<"Your points average are: "<<result<<endl;
 
 cout<<"And let's calculate your lettergrade! "<<endl;
    
    if (result >= 90 && result <= 100) {
        cout << "Your letter grade is: AA";
    }
    else if (result >= 79 && result <= 89) {
        cout << "Your letter grade is: BA";
    }
    else if (result >= 68 && result <= 78) {
        cout << "Your letter grade is: BB";
    }
    else if (result >= 61 && result <= 67) {
        cout << "Your letter grade is: CB";
    }
    else if (result >= 54 && result <= 60) {
        cout << "Your letter grade is: CC";
    }
    else if (result >= 47 && result <= 53) {
        cout << "Your letter grade is: DC";
    }
    else if (result >= 39 && result <= 46) {
        cout << "Your letter grade is: DD";
    }
    else if (result >= 0 && result <= 38) {
        cout << "Your letter grade is: FF";
    }
    else {
        cout << "Invalid result entered!";
    }

    return 0;
    
}
