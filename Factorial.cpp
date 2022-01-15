#include<iostream>
using namespace std;
main()
{
	int i,a,f;
	cout<<endl<<"Enter factorial number=> ";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		cout<<i<<" * ";
		f=f*i;
	}
	cout<<endl<<"Factorial=> "<<f;
}
