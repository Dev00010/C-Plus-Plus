#include<iostream>
using namespace std;
class math
{
	private:
	int a,b;
	public:
		void setdata()
		{
			cout<<endl<<"Enter Value of A=>";
			cin>>a;
			cout<<endl<<"Enter Value of B=>";
			cin>>b;
		}
		void printdata()
		{
			cout<<endl<<"A=>"<<a<<" B=>"<<b;
		}
		math operator+(math m2)
		{
			math tmp;
			tmp.a=a+m2.a;
			tmp.b=b+m2.b;
			return tmp;
		}
		math operator-(math m2)
		{
			math tmp;
			tmp.a=a-m2.a;
			tmp.b=b-m2.b;
			return tmp;
		}
		math operator*(math m2)
		{
			math tmp;
			tmp.a=a*m2.a;
			tmp.b=b*m2.b;
			return tmp;
		}
		math operator/(math m2)
		{
			math tmp;
			tmp.a=a/m2.a;
			tmp.b=b/m2.b;
			return tmp;
		}
};
main()
{
	math m1,m2,m3,m4,m5,m6;
	m1.setdata();
	m2.setdata();
	m1.printdata();
	m2.printdata();
	m3=m1+m2;
	//m3=m1.operator+(m2); Another way to call
	m3.printdata();
	m4=m1-m2;
	m4.printdata();
	m5=m1*m2;
	m5.printdata();
	m6=m1/m2;
	m6.printdata();
}
