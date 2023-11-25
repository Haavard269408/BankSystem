#include <iostream>

using namespace std;


class Account
{
private:
	string customerName;
	int accountNumber;
	int accountType;

public:
	Account() {

	}
	Account* parentAccount;

	string getCustomerName() {
		return customerName;
	}
	string setCustomerName(string newName) {
		return this->customerName = newName;
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


class Currrent_Account : public Account {

private:
	
	string accountName;
	int amount;
	Currrent_Account* subAccounts[5];

public:
	
	int subAccountsCount = 0;
	Currrent_Account* parentAccount;

	string getAccountName() {
		return accountName;
	}
	string setAccountName(string newAccountName) {
		return accountName = newAccountName;
	}
	int getAmount() { return amount; }
	int setAmount(int newAmount) { return amount += newAmount; }
	

	void Deposit(int amountToDeposit) {	
		setAmount(amountToDeposit);
	}

	void displayBalance() {
		cout << "\nAmount: " << this->getAmount() << " $ " ; 
	}

	Currrent_Account* createSubAccount() {
		
		Currrent_Account* subAccount = new Currrent_Account();
		
		subAccount->setAccountName("SubAccount01");
		subAccount->setCustomerName("Peter");
		subAccount->setAmount(0);
		
		subAccounts[subAccountsCount] = subAccount;
		
		subAccountsCount++;
		return subAccount;
	}

	Currrent_Account* switchAccount(Currrent_Account* parentAccount) {

		if (subAccountsCount >= 2) {
			subAccounts[1]->setAccountName("SubAccount02");
			subAccounts[2]->setAccountName("SubAccount03");

		}
	
		
		for (int i = 0; i < subAccountsCount; i++)
		{
			
				cout << "[" << i << "] " << subAccounts[i]->getAccountName() << "\n";
			
		}
		
		int input;
		cout << "Which account would you like to access? Input a number corresponding to the account: " << "Press 9 to go back to main account";
		cin >> input;
		if (input == 9) {
			return parentAccount;
		}
		else
		return subAccounts[input];


	}

	void backToMainAccount() {


	}

};

class SavingAccount : public Currrent_Account {

private:


public:




};