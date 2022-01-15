#include<iostream>
using namespace std;
class math
{
	int a,b;
	public:
	math()
	{
		cout<<endl<<"In Constructor";
		a=5;
		b=7;
	}
	~math() // ~ means destructor
	{
		cout<<endl<<"Bye";
	}
	void printdata()
	{
		cout<<endl<<"A=>"<<a<<" B=>"<<b;
	}
};
main()
{
	math m1,m2,m3;
	m1.printdata();
	m2.printdata();
	m3.printdata();
}
