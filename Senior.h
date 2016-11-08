#ifndef SENIOR_H_
#define SENIOR_H_
#include <string>
#include <sstream>
#include <vector>
#include <string>
#include <sstream>
#include <vector>
#include "../../HW_5 Polymorphism/HW_5 Polymorphism/Account.h"
#include "../../HW_5 Polymorphism/HW_5 Polymorphism/Customer.h"

class Senior : public Customer
{
public:
	Senior(std::string cust_name, std::string cust_address, std::string cust_phone, int cust_number) :
		Customer(cust_name, cust_address, cust_phone, cust_number) {}

	double Savings_Interest()
	{
		return savingsInterest;
	}
	double Check_Interest()
	{
		return checkingInterest;
	}
	double Check_Charge()
	{
		return checkCharge;
	}
	double Overdraft_Penalty()
	{
		return overdraftPenalty;
	}
};

#endif