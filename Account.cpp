//1.Header
#include"Account.h"

//2.Access the functions from header
//type "class_name::function_name()"

Account::Account()
{}

Account::Account(string name, double bal)
{
	this->name=name;
	balance=bal;
}

void Account::deposit(double amount)
{
	balance+=amount;
	return;
}

string Account::get_name()
{
	return name;
}

double Account::get_amount()
{
	return balance;
}

void Account::set_amount(double amount)
{
	balance=amount;
	return;
}

double Account::withdraw(double amount)
{
	if(amount>=balance)
	{
		cout<<"Can not withdraw "<<amount<<" from your account "<<balance<<endl;
	}
	else
	{
		return balance-=amount;
	}
}

