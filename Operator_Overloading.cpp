#include<iostream>
#include<string.h>
using namespace std;
class stu {
	private:
		char name[40];
	public:
		void setdata() {
			cout<<endl<<"Enter Name=>";
			cin>>name;
		}
		void printdata() {
			cout<<endl<<"Name=>"<<name;
		}
		stu operator+(stu s2) 
		{
			stu tmp;
			strcpy(tmp.name,name);
			strcat(tmp.name,s2.name);
			
			return tmp;
		}
};
main() 
{
	stu s1,s2,s3;
	s1.setdata();
	s2.setdata();
	s1.printdata();
	s2.printdata();
	s3=s1+s2;
	s3.printdata();
}
