#include<iostream>
using namespace std;
class bill
{
	private:
	int no,qty,price,total;
	char name[20];
	public:
		void setdata()
		{
			cout<<endl<<"Enter number=>";
			cin>>no;
			cout<<endl<<"Enter name=>";
			cin>>name;
			cout<<endl<<"Enter Quantity=>";
			cin>>qty;
			cout<<endl<<"Enter Price=>";
			cin>>price;
		}
		void printdata()
		{
			cout<<endl<<"Number=>"<<no<<" Name=>"<<name<<" Quantity=>"<<qty<<" Price=>"<<price;
		}
		int calc()
		{
			int temp;
			temp=qty*price;
			return temp;
		}
};
main()
{
	int total;
	bill b1;
	b1.setdata();
	b1.printdata();
	total=b1.calc();
	cout<<endl<<"Total=>"<<total;
    
}
