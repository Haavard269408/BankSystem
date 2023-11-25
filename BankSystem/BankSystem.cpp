
#include <iostream>
#include <ctime>

#include <chrono>
#include "Account.h"
#pragma warning(disable : 4996)

using namespace std;

const std::string currentDateTime() {
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);

	// Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
	// for more information about date/time format

	strftime(buf, sizeof(buf), "%X", &tstruct);

	return buf;
}

int InputGreeting(Account account) {

	if (currentDateTime() > "12:00:00") cout << "Good afternoon " << account.getCustomerName();
	else if (currentDateTime() > "18:00:00" && currentDateTime() < "04:00:00") cout << "Good evening " << account.getCustomerName();
	else cout << "Good morning " << account.getCustomerName();

	int input;
	cout << "\nPlease select your account type: ";
	cout << "\nPress 1 for your current account ";
	cout << "\nPress 2 for your savings account ";

	cin >> input;
	return input;

}
int main()
{
	Account account;
	account.setCustomerName("John");

	Currrent_Account* currAcc = new Currrent_Account();
	Currrent_Account* mainCurrentAccount = currAcc;
	currAcc->setAccountName("Main Account");
	
	

	/*int user = InputGreeting(account);*/
	
	int input;

	cout << mainCurrentAccount->getAccountName();

		while (true) {
			cout << "\n___________________" << endl;
			cout << "\nPress 1 to deposit money into your account " << endl;
			cout << "\nPress 2 to dispaly balance of your chosen account " << endl;
			cout << "\nPress 3 to create new account within your account" << endl;
			cout << "\nPress 4 to switch to new sub account" << endl;
			cout << "\nPress 5 to switch to back to main account" << endl;

			cin >> input;

			if (input == 0)break;

			switch (input) {

			case 1: {

				int amountToDeposit;
				cout << "How much would you like to deposit? ";
				cin >> amountToDeposit;
				currAcc->Deposit(amountToDeposit);

				break;
			}
			case 2: {
				currAcc->displayBalance();

				break;
			}
			
			case 3: {
				currAcc->createSubAccount();
				break;
			}
			case 4: {
				
				currAcc = currAcc->switchAccount(mainCurrentAccount);
				cout << "Current account: " << currAcc->getAccountName();
				break;

			}
			case 5: {
				if (currAcc == mainCurrentAccount) cout << "\nYou are already in main account";
				else currAcc = mainCurrentAccount;
				break;
			}
					
			default:
				cout << "Unknown input";
				
			};

		}
	
	
	


}



