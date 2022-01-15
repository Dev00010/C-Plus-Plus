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
			cout<<endl<<"Enter Number=>";
			cin>>no;
			fflush(stdin);
			cout<<endl<<"Enter Name=>";
			cin.getline(name,20);
		}
		void printdata()
		{
			cout<<endl<<"Number="<<no<<" Name="<<name;
		}
};
class marks : public stu
{
	protected:
	int english, hindi;
	public:
		void setdata()
		{
			stu::setdata();
			cout<<endl<<"Enter Marks of Hindi=>";
			cin>>hindi;
			cout<<endl<<"Enter Marks of English=>";
			cin>>english;
		}
		void printdata()
		{
			stu::printdata();
			cout<<endl<<"English=>"<<english<<" Hindi=>"<<hindi;
		}
};
class result : public marks 
{
	public:
		void printdata()
		{
			marks::printdata();
			cout<<endl<<"Result=>"<<english+hindi;
		}
};
main() 
{
	result r1;
	r1.setdata();
	r1.printdata();
	
}
