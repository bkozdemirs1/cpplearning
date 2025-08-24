#include <iostream>

using namespace std;

int main() {
    
    int table[10][10];
    
    int row,column;
    
    cout<<"Enter how many row you want: ";
    cin>>row;
    
    cout<<"Enter how many column you want: ";
    cin>>column;
    
    cout<<"Please enter your numbers: ";

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            
          cin>>table[i][j];
            
          table[i][j] = (i + 1) * (j + 1);
           
          cout << table[i][j] << "\t";
        }
        
      cout << endl;
    }

    return 0;
}
