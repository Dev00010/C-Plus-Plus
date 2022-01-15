// Program To see individual destructor
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
	~math()
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
	
	math m1;
	{
		math m2;
		{
			math m3;
			m3.printdata();
		}
		m2.printdata();
	}
	m1.printdata();
	
}
