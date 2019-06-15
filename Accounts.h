
#include <iostream>
#include <string>
using namespace std;
#pragma once
class Accounts

{
protected:

	int id;
	string name;
	double balance;
	
	
	
	


public:
	
	Accounts();

	void Set_Balance(double s);
	Accounts(const Accounts & T);


	void set_name(string s);
	string get_name();
	void set_ID(int s);
	int Get_ID();
	bool credit(double s);
	bool debit(double s);
	double getBalance();	
	void print_accounts();
	
};