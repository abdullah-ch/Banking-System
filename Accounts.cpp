// ConsoleApplication158.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include "Accounts.h"
using namespace std;

Accounts::Accounts(const Accounts & T)
{
	name = T.name;
	balance = T.balance;
	id = T.id;
}

Accounts::Accounts()
{
	name = "Abdullah";
	balance = 0;
	id = 12;
}


void Accounts::Set_Balance(double s)
{
	balance = s;
	cout << "The Balance present in your account is  " << balance << endl;
}



void Accounts::set_name(string s)
{
	name = s;
}


string Accounts::get_name()
{
	return name;
}

void Accounts::set_ID(int s)
{
	id = s;
}

int Accounts::Get_ID()
{
	return id;
}

bool Accounts::credit(double s)
{
	if (s < 0)
		return false;
	else
	{


		balance = balance + s;
		return true;
	}
}

bool Accounts::debit(double s)
{
	if (s >= balance)
	{
		cout << "Debit amount exceeded account balance...You are ghareeeb...BRO" << endl;
		return false;
		
	}
	else
	{
		
		balance = balance - s;
		return true;
	//	cout << "BALANCE issssssssssssssss " << balance << endl;
		
	}

}


double Accounts::getBalance()
{
	return balance;
}


void Accounts::print_accounts()
{
	cout << " The name of the owner of this account is " << get_name() << endl;
	cout << " The ID of the account is  " << Get_ID() << endl;
	cout << "The updated balance is " << getBalance() << endl;
	
}





