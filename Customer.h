#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>
#include "../../HW_5 Polymorphism/HW_5 Polymorphism/Bank.h"

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
private:
	std::string name;
	std::string address;
	std::string telephone_number;
	int customer_number;
protected:
	double savingsInterest;
	double checkingInterest;
	double checkCharge;
	double overdraftPenalty;
public:
	Customer(std::string cust_name, std::string cust_address, std::string cust_phone, int cust_number)
	{
		name = cust_name;
		address = cust_address;
		telephone_number = cust_phone;
		customer_number = cust_number;
	}

	std::string get_name()
	{
		return name;
	}

	std::string get_address()
	{
		return address;
	}

	std::string get_telephonenumber()
	{
		return telephone_number;
	}

	int get_customernumber()
	{
		return customer_number;
	}
	
	virtual double Savings_Interest()
	{
		return savingsInterest;
	}

	virtual double Check_Interest()
	{
		return checkingInterest;
	}

	virtual double Check_Charge()
	{
		return checkCharge;
	}

	virtual double Overdraft_Penalty()
	{
		return overdraftPenalty;
	}
};


#endif