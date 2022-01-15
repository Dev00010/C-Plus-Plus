#include<iostream>
using namespace std;
main()
{
	try
	{
		double no1,no2,div;
		cout<<endl<<"Enter Number 1=>";
		cin>>no1;
		cout<<endl<<"Enter Number 2=>";
		cin>>no2;
		
		if(cin.fail()) //cin.fail() is an inbuilt function i.e Input is name instead of number
		{
			throw 'a';
		}
		if(no2==0)
		{
			throw 0;
		}
		else
		{
			div=no1/no2;
			cout<<endl<<"Division=>"<<div;
		}
	}
	catch (int x)
	{
		cout<<endl<<"Not Possible to divide by 0";
	}
	catch (char a)
	{
		cout<<endl<<"Enter only numeric value";
	}
}
