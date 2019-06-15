#pragma once

#include "Accounts.h"

class CheckingAccounts : public Accounts
{

private:

	double Fee_charged_per_Transaction;


public:
	CheckingAccounts(const CheckingAccounts & T);

	CheckingAccounts();
	void Set_Fee_Charged(double s);
	double Get_Fee_Charged();
	void credit(double s);
	void debit(double s);


};


