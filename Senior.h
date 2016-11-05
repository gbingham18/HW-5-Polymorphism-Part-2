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
	Senior();

	void Savings_Interest()
	{
	}
	double Check_Interest()
	{
	}
	double Check_Charge()
	{
	}
	double Overdraft_Penalty()
	{
	}
};

#endif