#include<iostream>
using namespace std;
class math
{
	private:
	int a,b,c;
	public:
		math()
		{
			a=0;
			b=0;
		}
		math(int a,int b)
		{
			cout<<endl<<"This=>"<<this;
			this->a=a;  
			this->b=b;
		}
		void printdata()
		{
			cout<<endl<<"This=>"<<this<<" A=>"<<a<<" B=>"<<b;
		}
		math operator>(math m2)
		{
			if (a+b>m2.a+m2.b)
			{
				return *this;   // *this gives value of m1
			}
			else
			{
				return m2; 
			}
		}
};
main()
{
	math m1(10,20),m2(20,30),m3;
	m1.printdata();
	m2.printdata();
	m3=m1>m2;
	m3.printdata();
}
