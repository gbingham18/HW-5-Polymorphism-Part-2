#ifndef SAVINGSACCT_H_
#define SAVINGSACCT_H_
#include <string>
#include <sstream>
#include <vector>
#include "../../HW_5 Polymorphism/HW_5 Polymorphism/Bank.h"
#include "../../HW_5 Polymorphism/HW_5 Polymorphism/Account.h"
#include "../../HW_5 Polymorphism/HW_5 Polymorphism/Customer.h"
#include "../../HW_5 Polymorphism/HW_5 Polymorphism/Transaction.h"

class SavingsAccount : public Account
{
private:
	double balance;
	double interest;
public:

	SavingsAccount(Customer *cust, int id) : Account(cust, id) {}

	void deposit(double amt)
	{
		balance += amt;
		std::string fees = get_fees();
		Transaction *tran = NULL;
		std::string transaction_type = "deposit";
		Transaction transaction(customer->get_customernumber(), transaction_type, amt, get_fees());
		*tran = transaction;
		transactions.push_back(tran);
	}

	void withdraw(double amt)
	{
		balance -= amt;
		std::string fees = get_fees();
		Transaction *tran = NULL;
		// FIXME: Create a Transaction object and assign it to tran.
		std::string transaction_type = "withdrawal";
		Transaction transaction(customer->get_customernumber(), transaction_type, amt, get_fees());
		*tran = transaction;
		transactions.push_back(tran);
	}

	void add_interest()
	{
		balance = balance * interest;
	}
};
#endif