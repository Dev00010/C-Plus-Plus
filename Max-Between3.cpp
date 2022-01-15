#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<endl<<"Enter Number 1=> ";
	cin>>a;
	cout<<endl<<"Enter Number 2=> ";
	cin>>b;
	cout<<endl<<"Enter Number 3=> ";
	cin>>c;
	if(a>b && a>c)
	{
		cout<<endl<<a<<" is Max";
	}
	else if (b>a && b>c)
	{
		cout<<endl<<b<<" is Max";
	}
	else if (c>a && c>b)
	{
		cout<<endl<<c<<" is Max";
	}
	else
	{
		cout<<endl<<"Number are Equal";
	}
	
}
