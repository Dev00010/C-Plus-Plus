#include<iostream>
using namespace std;
class math
{
	private:
	int a,b;
	public:
		math(int a,int b)
		{
			cout<<endl<<"This=>"<<this;
			this->a=a;  // this-> is used to use same variable
			this->b=b;
		}
		void printdata()
		{
			cout<<endl<<"This=>"<<this<<" A=>"<<a<<" B=>"<<b;
		}
};
main()
{
	math m1(10,20),m2(20,30),m3(30,40);
	m1.printdata();
	m2.printdata();
	m3.printdata();
}
