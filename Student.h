#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
#include <sstream>
#include <vector>
#include <string>
#include <sstream>
#include <vector>
#include "../../HW_5 Polymorphism/HW_5 Polymorphism/Account.h"
#include "../../HW_5 Polymorphism/HW_5 Polymorphism/Customer.h"

class Student : public Customer
{
public:
	Student();

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