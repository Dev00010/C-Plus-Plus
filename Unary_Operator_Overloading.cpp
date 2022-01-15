#include<iostream>
using namespace std;
class math
{
	private:
	int a,b,c;
	public:
		void setdata()
		{
			cout<<endl<<"Enter Value of A=>";
			cin>>a;
			cout<<endl<<"Enter Value of B=>";
			cin>>b;
			cout<<endl<<"Enter Value of C=>";
			cin>>c;
		}
		void printdata()
		{
			cout<<endl<<"A=>"<<a<<" B=>"<<b<<" C=>"<<c;
		}
		void operator*()
		{
			a=a*10;
			b=b*10;
			c=c*10;
		}
};
main()
{
	math m1;
	m1.setdata();
	m1.printdata();
	*m1;
	m1.printdata();
}
