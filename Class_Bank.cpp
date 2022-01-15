#include<iostream>
using namespace std;
class bank
{
	private:
	int accno;
	char name[30];
	protected:
	unsigned int balance; //unsigned means no negative value
	public:
	void openaccount()
	{
		cout<<endl<<"Enter Account Number=>";
	    cin>>accno;
		cout<<endl<<"Enter Account Holder name=>";
		cin>>name;
		cout<<endl<<"Enter Opening Amount=>";
		cin>>balance;	   	
	}
};
class saving : public bank
{
	public:
	void details()
	{
		cout<<endl<<"A/c No.=>"<<accno<<" Name=>"<<name<<" Savings A/c Balance=>"<<balance;
	}
	void withdraw()
	{
		int withdraw;
		cout<<endl<<"Enter Amount to Withdraw=>";
		cin>>withdraw;
		if(balance>500)
		{
		balance=balance-withdraw;
	    }
	    else
	    {
	    	cout<<endl<<"!!!Cannot Withdraw below minimum balance!!!";
		}
	}
	 void deposit()
    {
    	int deposit;
    	cout<<endl<<endl<<"Enter Amount to Deposit=>";
    	cin>>deposit;
    	balance=balance+deposit;
	}
};
class current : public bank
{
	public:
	void details()
	{
		cout<<endl<<"A/c No.=>"<<accno<<" Name=>"<<name<<" Current A/c Balance=>"<<balance;
	}
     void withdraw()
	{
		int withdraw;
		cout<<endl<<"Enter Amount to Withdraw=>";
		cin>>withdraw;
		if(balance>500)
		{
		balance=balance-withdraw;
	    }
	    else
	    {
	    	cout<<endl<<"!!!Cannot Withdraw below minimum balance!!!";
		}
	}
	 void deposit()
    {
    	int deposit;
    	cout<<endl<<endl<<"Enter Amount to Deposit=>";
    	cin>>deposit;
    	balance=balance+deposit;
	}

}; 
main()
{
 saving s1;
 current c1;
 s1.openaccount();
 cout<<endl<<"=================================================";
 cout<<endl<<"Bank Statement:-";
 s1.details();
 cout<<endl<<"=================================================";
 s1.deposit();
 cout<<endl<<"=================================================";
 cout<<endl<<"Updated Bank Statement:-";
 s1.details();
 cout<<endl<<"=================================================";
 s1.withdraw();
 cout<<endl<<"=================================================";
cout<<endl<<"Updated Bank Statement:-";
 s1.details();
 cout<<endl<<"=================================================";
 
 
 
 cout<<endl<<endl<<"CURRENT ACCOUNT DETAILS";
 c1.openaccount();
 cout<<endl<<"=================================================";
cout<<endl<<"Bank Statement:-";
 c1.details();
 cout<<endl<<"=================================================";
 c1.deposit();
 cout<<endl<<"=================================================";
 cout<<endl<<"Updated Bank Statement:-";
 c1.details();
 cout<<endl<<"=================================================";
 c1.withdraw();
 cout<<endl<<"=================================================";
 cout<<endl<<"Updated Bank Statement:-";
 c1.details();
 cout<<endl<<"=================================================";

}
