#include<iostream>
using namespace std;
main()
{
	int a=5;
	int &b=a;
	cout<<endl<<"A=>"<<a<<" B=>"<<b;
	b=100;
	cout<<endl<<"A=>"<<a<<" B=>"<<b;
	a=70;
	cout<<endl<<"A=>"<<a<<" B=>"<<b;
	b=200;
	cout<<endl<<"A=>"<<a<<" B=>"<<b;
}
