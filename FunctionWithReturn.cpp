#include<iostream>
using namespace std;
	int max(int a, int b)
	{
		if(a>b)
		{
			return a;
		}
		else
		{
			return b;
		}
	}
	int add(int a,int b)
	{
		int x;
		x=a+b;
		return x;
	}
main()
{
	int a,b,c,sum;
	cout<<endl<<"Enter value of A=>";
	cin>>a;
	cout<<endl<<"Enter value of B=>";
	cin>>b;
    c=max(a,b);
    cout<<endl<<"Max=>"<<c;
    sum=add(a,b);
    cout<<endl<<"Sum=>"<<sum;
		
}
