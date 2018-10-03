#include"Account.h"

int main()
{
	//Local Variables
	Account my_account;
	Account your_account("Royshawn McClain",1000);
	
	//code
	my_account.set_amount(2000);
	
	cout<<"My Account Info."<<endl;
	cout<<"Name: "<<my_account.get_name()<<" Balance: "<<my_account.get_amount()<<endl;
	
	cout<<"Your Account Info."<<endl;
	cout<<"Name: "<<your_account.get_name()<<" Balance: "<<your_account.get_amount()<<endl;
	
	my_account.deposit(200);
	cout<<"My Account Info."<<endl;
	cout<<"Name: "<<my_account.get_name()<<" Balance: "<<my_account.get_amount()<<endl;
	
	your_account.withdraw(500);
	cout<<"Your Account Info."<<endl;
	cout<<"Name: "<<your_account.get_name()<<" Balance: "<<your_account.get_amount()<<endl;
	
	return 0;
}
