#include<iostream>
using namespace std;

template<class t>
void add(t a,t b)
{
	cout<<endl<<a<<"\t"<<b;
}
template<class s>
void add(s a,s b,s c)
{
	cout<<endl<<a<<"\t"<<b<<"\t"<<c;
}
main()
{
	add(5,8);
	add(10,11,12);
	add(8.9,9.6);
	
}
