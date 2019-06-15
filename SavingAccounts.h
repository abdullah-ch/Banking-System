#pragma once
#include <iostream>
#include <string>
#include "Accounts.h"
using namespace std;


class SavingAccounts: public Accounts
{
private:
	double interest_rate;

public:

	SavingAccounts();
	
	SavingAccounts(const SavingAccounts & T);
	void Set_Calculate_interest(double s);
	double Get_Calculate_interest();


};