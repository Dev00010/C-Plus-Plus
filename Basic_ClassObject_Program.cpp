#include<iostream>
using namespace std;
class stu
{
	private:
	int no;      
	char name[20];
	public:
	void setdata()
	{
		cout<<endl<<"Enter Number=> ";
		cin>>no;
		cout<<endl<<"Enter Name=> ";
		cin>>name;
	}
	void printdata()
	{
		cout<<endl<<"No=> "<<no<<" Name=> "<<name;
	}
};
main()
{
	stu s1,s2,s3;
	s1.setdata();
	s2.setdata();
	s3.setdata();
	s1.printdata();
	s2.printdata();
	s3.printdata();
}
