#include<iostream>
using namespace std;
main()
{
	int a[100],i,n;
	cout<<endl<<"Enter array limit=> ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<endl<<"Enter value for a-"<<i<<"=> ";
		cin>>a[i];
	}
	cout<<endl<<"Value in Array are:";
	for(i=0;i<n;i++)
	{
		cout<<endl<<""<<a[i];
	}
}
