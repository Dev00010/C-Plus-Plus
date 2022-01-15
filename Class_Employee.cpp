#include<iostream>
using namespace std;
class emp
{
	private:
	int no;
	char name[20];
	int salary;
	public:
    void setdata()
    {
    	cout<<endl<<"Enter Employee Number=> ";
    	cin>>no;
    	cout<<endl<<"Enter Employee Name=> ";
    	cin>>name;
    	cout<<endl<<"Enter Employee Salary=> ";
    	cin>>salary;
	}
	void printdata()
	{
		cout<<endl<<"Number=>"<<no<<" Name=>"<<name<<" Salary=>"<<salary;
	}
};
main()
{
	emp e1,e2,e3,e4;
	e1.setdata();
	e2.setdata();
	e3.setdata();
	e4.setdata();
	e1.printdata();
	e2.printdata();
	e3.printdata();
	e4.printdata();
}
