#include <iostream>

using namespace std;

class Bank_Account{
	
	private:
	string Customer_Name;
	double Account_Number;
	double Balance;
	
	public:
	Bank_Account(string Name,double ID,double balance)
	{
		Customer_Name=Name;
		Account_Number=ID;
		Balance=balance;
	}
	
	uint8_t Deposite(double Cash_Amount)
	{
		if (Cash_Amount>0)
		Balance+=Cash_Amount;
		else 
		cout <<"Sorry the number must be positive number"<<endl;
	}
	
	uint8_t Withdraw(double Cash_Amount)
	{
		if (Cash_Amount>0)
		Balance -= Cash_Amount;
		else
		cout << "Sorry the number must be positive number "<<endl;
	}
	
	void Show_Customer_Stats(){
		cout <<"Name     "<<Customer_Name<<endl;
		cout <<"Account_Number      "<<Account_Number<<endl;
		cout <<"Balance      "<<Balance<<endl;
	}
	
}

int main (void){
	
	Bank_Account Mahmoud("Mahmoud Hassan",501338,500000);//Creation
	
	Mahmoud.Deposite(500000); //Deposite 500k
	Mahmoud.Show_Customer_Stats(); //show new stats should be 1million
	
	Mahmoud.Withdraw(999999.5);//withdraw 999.9995k
	Mahmoud.Show_Customer_Stats();//new balance should be 0.05
	
	return 0;
	
}
