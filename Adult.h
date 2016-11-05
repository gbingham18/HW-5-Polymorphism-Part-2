#ifndef ADULT_H_
#define ADULT_H_
#include <string>
#include <sstream>
#include <vector>
#include "../../HW_5 Polymorphism/HW_5 Polymorphism/Account.h"
#include "../../HW_5 Polymorphism/HW_5 Polymorphism/Customer.h"

class Adult : public Customer
{
public:
	Adult();

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

