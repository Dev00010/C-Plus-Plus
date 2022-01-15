#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<endl<<"Enter number 1=> ";
	cin>>a;
	cout<<endl<<"Enter number 2=> ";
	cin>>b;
	cout<<endl<<a<<" and "<<b<<" are before swap";
	c=a;
	a=b;
	b=c;
	cout<<endl<<a<<" and "<<b<<" are after swap";
}
