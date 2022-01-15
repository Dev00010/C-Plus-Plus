#include<iostream>
using namespace std;
class matrix
{
	
	int arr[3][3];
	int i,n,j;
	public:
	void setdata()
	{
	   for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	    	cout<<endl<<"Enter number for a("<<i<<")"<<"("<<j<<")=>";
		    cin>>arr[i][j];
	    }
	}	
	}
	void printdata()
	{
		for(i=0;i<3;i++)
	    {
		    for(j=0;j<3;j++)
		{
		   cout<<arr[i][j]<<" ";
	    }
	      cout<<endl;
	    }	
	    cout<<endl;
	}
	matrix operator+(matrix m2)
	{
		cout<<endl<<"Addition of 2 Array is:"<<endl;
		matrix tmp;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				tmp.arr[i][j]=arr[i][j]+m2.arr[i][j];
			}
		}
		return tmp;
	}
};
main()
{
    matrix m1,m2,m3;
	m1.setdata();
	m2.setdata();
	m1.printdata();
	m2.printdata();
	m3=m1+m2;
	m3.printdata();	
}
