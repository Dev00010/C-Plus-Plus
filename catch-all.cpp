//Try--Throw--Multiple Catch program
#include<iostream>
using namespace std;
main()
{
    try
    {
       int hindi,english;
       
       cout<<endl<<"Enter marks of English=>";
       cin>>english;
       cout<<endl<<"Enter marks of Hindi=>";
       cin>>hindi;
       
       if (english<0)
       {
       	throw 1;
	   }
	   else if (hindi<0)
	   {
	   	throw 1.1;
	   }
	   else
	   {
	   	cout<<endl<<"Total=>"<<english+hindi;
	   }
    } 
    catch (...)
    {
    	cout<<endl<<"Enter Valid Marks";
	}
}
