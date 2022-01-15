#include<iostream>
using namespace std;
main()
{
	int a,i,b,c=1;
	cout<<endl<<"Enter base value=> ";
	cin>>a;
	cout<<endl<<"Enter power value=> ";
	cin>>b;
	for(i=1;i<=b;i++)
	{
		c=c*a;
	}
	cout<<endl<<"Answer=> "<<c;
}
