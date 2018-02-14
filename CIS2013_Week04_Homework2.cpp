#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cmath>

using namespace std;

	int card = 0;
	int playertotal = 0;
	int dealertotal = 0;
	char hit_stick = 'h';
	char yes_no = 'n';
	
	char playerdraw (int);
	char dealerdraw (int);
	
	bool (keep_playing);
	bool player_stay = false;
	bool player_done = false;
	bool dealer_done = false;
	
int main(){
	srand(time(0));
	while (keep_playing);
	cout << "Blackjack" << endl;
	cout << "*********" << endl;
	playerdraw (card);
	playerdraw (card);
	dealerdraw (card);
	cout << "Player card total: " << playertotal << endl;
	while ((player_done==false) && (dealer_done==false)){
		cout << "Hit or Stick (H/S):";
		cin >> hit_stick;
		if (((hit_stick=='h')||(hit_stick=='H')) && (player_done==false)){
			playerdraw (card);
			if (playertotal==21){
				cout << "You have Blackjack, YOU WIN!" << endl;
				player_done=true;
				dealer_done=true;
				}
					else if (playertotal < 21){
						cout << "Your card total: " << playertotal << endl;
					}
					else{
						cout << playertotal << " Sorry you bust" << endl;
						player_done=true;
					}
			}
			
		else if (dealer_done==false){
			cout << "Player stays with" << playertotal << endl;
			dealerdraw (card);
			cout << "Dealer card total:" << dealertotal << endl;
			while (dealertotal < 17) {
				dealerdraw (card);
				cout << "Dealer card total: " << dealertotal << endl;
			}
			if ((dealertotal>16) && (dealertotal<22)){
				cout << "Dealer sticks" << endl;
				dealer_done=true;
			}
		}
		}
		
		
		if ((playertotal < 21)&&(dealertotal<22)){
			cout << "Player card total: " << playertotal << endl;
			cout << "The Dealer card total: " << dealertotal << endl;
		}
			if (playertotal >= dealertotal){cout << "Player wins" << endl;}
			else {cout << "Dealer wins" << endl;
			}
		cout << "Would you like to play again? (Y/N):";
		cin >> yes_no;
		cout << endl;
		if ((yes_no=='n')||(yes_no=='N')){keep_playing=false;}
		
	
	
	
	
	
	
	
	return 0;
}


char playerdraw (int card)
{
	card = (rand() % 13) +1;
	if (card==1){
		cout << "You have an Ace" << endl;
		playertotal=playertotal+1;
	}
	else if (card<=10){
		cout << "You have a " << card << endl;
		playertotal=playertotal+1;
	}
	else if (card==11){
		cout << "You have a Jack" << endl;
		playertotal=playertotal+10;
	}
	else if (card==12){
		cout << "You have a Queen" << endl;
		playertotal=playertotal+10;
	}
	else if (card==13){
		cout << "You have a King" << endl;
		playertotal=playertotal+10;
	}
	return 'c';}





char dealerdraw (int card){
	card = (rand() % 13) +1;
	if (card==1){
		cout << "Dealer has an Ace" << endl;
		dealertotal=dealertotal+1;
	}
	else if (card<=10){
		cout << "Dealer has a " << card << endl;
		dealertotal=dealertotal+1;
	}
	else if (card==11){
		cout << "dealer has a Jack" << endl;
		dealertotal=dealertotal+10;
	}
	else if (card==12){
		cout << "Dealer has a Queen" << endl;
		dealertotal=dealertotal+10;
	}
	else if (card==13){
		cout << "dealer has a King" << endl;
		dealertotal=dealertotal+10;
	}
	return 'c';
}
