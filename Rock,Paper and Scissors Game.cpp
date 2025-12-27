#include <iostream>
#include <ctime>
using namespace std;

int main() {

	srand(time(NULL));
	int user;
	int userScore = 0, botScore = 0;
	
	do {

			cout<<"-----------------------";
			cout<<"\nFor Rock --> 1";
			cout<<"\nFor Paper --> 2"<<endl;
			cout<<"For Scissors --> 3"<<endl;
			cout<<"For Exit --> 0"<<endl;
			cout<<"Please make your choice: ";
			cout<<"\n------------------------"<<endl;

			cin>>user;

			if (user == 0) {

				cout<<"Game Over!";
				break;
			}

			int bot = rand()% 3+1;

			if (user == bot) {

				cout<<"Draw, no points!";
			}
			else if (user == 1 && bot == 3) {

				cout<<"You won! (Rock beats Scissors)";

				userScore++;
			}
			else if (user == 2 && bot == 1) {

				cout<<"You won! (Paper beats Rock)";

				userScore++;
			}
			else if (user == 3 && bot == 2) {

				cout<<"You won! (Scissors beats Paper)";

				userScore++;
			}
			else {

				cout<<"Computer wins!";

				botScore++;
			}

			cout<<"\nYour total wins: "<<userScore;
			cout<<"\nComputer's total wins: "<<botScore<<endl;

		} while (user != 0);

		if (userScore > botScore) {

			cout<<"You are the Champion of Rock , Paper and Scissors Game!";
		}
		
		else if(userScore == botScore) {
		    
		    cout<<"Scores are equal! Goodbye.";
		}

		else {

			cout<<"Computer is the Champion but don't worry, try again!";
		}
	
    return 0;
}
