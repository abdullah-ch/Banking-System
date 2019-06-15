// ConsoleApplication162.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "CheckingAccount.h"




CheckingAccounts::CheckingAccounts()
{
	
	Fee_charged_per_Transaction = 0;

}


void CheckingAccounts::Set_Fee_Charged(double s)
{
	Fee_charged_per_Transaction = s;
	cout << "The Fee charhed per transaction is " << Fee_charged_per_Transaction << endl;
}

double CheckingAccounts::Get_Fee_Charged()
{
	return Fee_charged_per_Transaction;
}


void CheckingAccounts::credit(double D)
{
	D = D - Fee_charged_per_Transaction;
	if (Accounts::credit(D)==true)
	{
		cout << "The amount that is gonna de deposited now is " << D << endl;
	}
	
	else 
	{
		cout << "Your transaction fee charges are greater than your account's money....So nothing will happen" << endl;
	}

	

}

CheckingAccounts::CheckingAccounts(const CheckingAccounts & T)
{
	Fee_charged_per_Transaction = T.Fee_charged_per_Transaction;
}

void CheckingAccounts::debit(double s)
{
	s = s + Fee_charged_per_Transaction;
	if (Accounts::debit(s) == true)
	{

		cout << "The amount that will be deducted from the balance and it is equal to the sum of debit and Fee per transaction is " << s << endl;
	///	Accounts::debit(s);

		cout << "The transaction fee is " << Fee_charged_per_Transaction << endl;
	}

	else
		cout << "The debit fee is actually greater than your whole balance " << endl;

}