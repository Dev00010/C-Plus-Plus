#include<iostream>
using namespace std;
class math
{
	private:
	int a,b,c;
	public:
		math()
		{		
			a=10;
			b=20;
			c=90;
		}	
		math(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}	
		void printdata()
		{
			cout<<endl<<"A=>"<<a<<" B=>"<<b<< " C=>"<<c;
		}
};
main()
{
	math m1,m2,m3(9,7,6),m4(11,22,33);
	m1.printdata();
	m2.printdata();
	m3.printdata();
	m4.printdata();
}
