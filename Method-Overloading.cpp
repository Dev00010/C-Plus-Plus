#include<iostream>
using namespace std;
	int a,b,c,d;
	void add(int a,int b)
	{
		cout<<endl<<"2 Variable Add=>"<<a+b;
	}
	void add(int a,int b,int c)
	{
		cout<<endl<<"3 Variable Add=>"<<a+b+c;
	}
	void add(int a,int b,int c,int d)
	{
		cout<<endl<<"4 Variable Add=>"<<a+b+c+d;
	}

main()
{
	add(10,20);
	add(10,20,30);
	add(30,40,50,60);
	
}
