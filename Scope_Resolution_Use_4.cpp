#include<iostream>
using namespace std;
class stu
{
  private:
  int no;
  char name[20];
  static int x;	
  public:
   void setdata()
   {
   	cout<<endl<<"Enter Name=> ";
   	cin>>name;
   	x++;
   	no=x;
   }
   void printdata()
   {
   	cout<<endl<<"Number=>"<<no<<" Name=>"<<name;
   }
   static void printcount()
   {
   	cout<<endl<<"X=>"<<x;
   }
};
int stu::x;

main()
{
	stu s1,s2,s3;
	s1.setdata();
	s2.setdata();
	s3.setdata();
	s1.printdata();
	s2.printdata();
	s3.printdata();
	stu::printcount();
}
