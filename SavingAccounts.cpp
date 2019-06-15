// ConsoleApplication164.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
#include "SavingAccounts.h"

SavingAccounts::SavingAccounts()
{

	interest_rate = 0.7;
}



void SavingAccounts::Set_Calculate_interest(double s)
{
	interest_rate = interest_rate * balance;
	cout << "The interest amount earned by your account is " << Get_Calculate_interest() << endl;
	Accounts::credit(Get_Calculate_interest());
	cout << "The balance that is present in your saving account is " << balance << endl;


}

double SavingAccounts::Get_Calculate_interest()
{
	return interest_rate;

}


SavingAccounts::SavingAccounts(const SavingAccounts & T)
{
	interest_rate = T.interest_rate;
}