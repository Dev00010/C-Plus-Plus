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
			cin.getline(name,20);
		}
		void printstu()
		{
			cout<<endl<<"Number="<<no<<" Name="<<name;
		}
};
class marks 
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
class result : public stu,public marks
{
	public:
		void printresult()
		{
			cout<<endl<<"Result=>"<<english+hindi;
		}
};
main() 
{
	result r1;
	r1.setstu();
	r1.setmarks();
	r1.printstu();
	r1.printmarks();
	r1.printresult();
}
