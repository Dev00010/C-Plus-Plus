#include<iostream>
using namespace std;
class poly
{
	protected:
	int h,b;
	public:
		void setpoly()
		{
			cout<<endl<<"Enter height=>";
			cin>>h;
			cout<<endl<<"Enter breadth=>";
			cin>>b;
		}
		void printpoly()
		{
			cout<<endl<<"Height=>"<<h<<" Breadth=>"<<b;
		}
};
class tri : public poly
{
	public:
		void printarea()
		{
			cout<<endl<<"Area of Triangle=>"<<h*b*0.5;
		}
};
class rect : public poly
{
	public:
		void printrarea()
		{
			cout<<endl<<"Area of Rectangle=>"<<h*b;
		}
};
main()
{
	tri t1;
	rect r1;
	t1.setpoly();
	t1.printpoly();
	t1.printarea();
	r1.setpoly();
	r1.printpoly();
	r1.printrarea();
}
