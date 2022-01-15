#include<iostream>
using namespace std;
class math
{
	private:
	int a,b,c;
	public:
	void setdata()
	{
		cout<<endl<<"Enter value of A=>";
		cin>>a;
		cout<<endl<<"Enter value of B=>";
		cin>>b;
	
	}	
	void printdata()
	{
		cout<<endl<<"A=>"<<a<<" B=>"<<b;
	}
	math add(math m2)
	{
		math tmp;
		tmp.a=a+m2.a;
		tmp.b=b+m2.b;
		return tmp;
	}
};
main()
{
	math m1,m2,m3;
	m1.setdata();
	m2.setdata();
	m1.printdata();
	m2.printdata();
	m3=m1.add(m2);
	m3.printdata();
}
