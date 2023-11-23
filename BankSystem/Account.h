

#include <iostream>

using namespace std;


class Account
{
private:
	string customerName;
	int accountNumber;
	int accountType;

public:
	string getName() {
		return customerName;
	}
	string setName(string newName) {
		return customerName = newName;
	}
	int getAccNum() {
		return accountNumber;
	}
	int setAccNum(int newNumber) {
		return accountNumber = newNumber;
	}
	int getAccType() {
		return accountType;
	}
	int setAccType(int accType) {
		return accountType = accType;
	}

};

