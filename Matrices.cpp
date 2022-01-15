#include<iostream>
using namespace std;
main()
{
	int i,n,j;
	int arr[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		cout<<endl<<"Enter number for a("<<i<<")"<<"("<<j<<")=>";
		cin>>arr[i][j];
	    }
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
}
