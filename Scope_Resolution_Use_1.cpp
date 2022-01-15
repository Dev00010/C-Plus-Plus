#include<iostream>
using namespace std;
class stu
{
   private:
   int no;
   char name[20];
   public:
   void setdata();
   void printdata();
};

void stu::setdata()    // :: means scope resolution operator
	{
		cout<<endl<<"Enter Number=> ";
		cin>>no;
		cout<<endl<<"Enter Name=> ";
		cin>>name;
	 } 
void stu::printdata() 
{
	cout<<endl<<"No=>"<<no<<" Name=>"<<name;
}
main()
{
	stu s1;
	s1.setdata();
	s1.printdata();
	
}
