#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<endl<<"Addition of 2 number is=> "<<a+b;
}
main()
{
	int a,b;
	cout<<endl<<"Enter Number 1=> ";
	cin>>a;
	cout<<endl<<"Enter Number 2=> ";
	cin>>b;
	add(a,b);
}
