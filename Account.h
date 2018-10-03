#include<string>
#include<iostream>
using namespace std;

class Account
{
	private:
		string name;
		double balance;
	public:
		Account();	
		Account(string,double);
		void deposit(double);
		double withdraw(double);
		string get_name();
		double get_amount();
		void set_amount(double);
};
