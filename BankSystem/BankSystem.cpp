
#include <iostream>
#include "Account.h";
using namespace std;


int main()
{
	Account account;

	int input;

	while (true) {
		cout << "\n___________________" << endl;
		cout << "\nPress 1 to make new persons " << endl;
		cout << "\nPress 2 to print info of persons " << endl;
		cout << "\nPress 3 to create new person" << endl;
		cout << "\nPress 4 to create change name of person" << endl;
		cout << "\nPress 5 to sort by age" << endl;
		cout << "\nPress 6 to delete a person" << endl;


		cin >> input;

		switch (input) {

		case 1: {

			break;
		}

		default:
			cout << "Unknown input";

		};

	}
}



