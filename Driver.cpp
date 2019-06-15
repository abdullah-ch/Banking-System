// ConsoleApplication197.cpp : Defines the entry point for the console application.
//
#pragma once
#include "stdafx.h"
#include "Accounts.h"
#include "SavingAccounts.h"
#include "CheckingAccount.h"

int main()
{
	/*Accounts A;

	A.set_ID(123);
	A.set_name("bilal");
	A.credit(134);
	A.print_accounts();
	A.debit(122);
	A.print_accounts();*/

/*
	SavingAccounts S  ;
	S.Set_Balance(100);
	S.Set_Calculate_interest(6);
	S.credit(30);
	*/
	CheckingAccounts T;
	T.Set_Balance(300);
	T.Set_Fee_Charged(50);
	T.debit(50);
	
	T.print_accounts();

	T.Set_Fee_Charged(30);
	T.credit(110);
	T.print_accounts();





}



