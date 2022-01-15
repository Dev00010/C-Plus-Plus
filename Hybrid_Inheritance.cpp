#include<iostream>
using namespace std;
class stu
{
	private:
	int no;
	char name[20];
	public:
		void setstu()
		{
			cout<<endl<<"Enter Number=>";
			cin>>no;
			fflush(stdin);
			cout<<endl<<"Enter Name=>";
			cin>>name;
		}
		void printstu()
		{
			cout<<endl<<"Number="<<no<<" Name="<<name;
		}
};
class marks : public stu
{
	protected:
	int english, hindi;
	public:
		void setmarks()
		{
			cout<<endl<<"Enter Marks of Hindi=>";
			cin>>hindi;
			cout<<endl<<"Enter Marks of English=>";
			cin>>english;
		}
		void printmarks()
		{
			cout<<endl<<"English=>"<<english<<" Hindi=>"<<hindi;
		}
};
class sport 
{
	protected:
	int cricket;
	public:
		void setcricket()
		{
			cout<<endl<<"Enter Marks of Cricket=>";
			cin>>cricket;
		}
		void printcricket()
		{
			cout<<" Cricket=>"<<cricket;
		}
};
class result : public marks,public sport
{
	public:
		void printresult()
		{
			cout<<endl<<"Result=>"<<english+hindi+cricket;
		}
};

main() 
{
	result r1;
	r1.setstu();
	r1.setmarks();
	r1.setcricket();
	r1.printstu();
	r1.printmarks();
	r1.printcricket();
	r1.printresult();
}
