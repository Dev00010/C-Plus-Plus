#include<iostream>
using namespace std;
class india;

class us
{
   private:
   int x;
   public:
   void setus()
   {
   	cout<<endl<<"Enter Number=> ";
   	cin>>x;
	}
	void printus()
	{
		cout<<endl<<"Number=> "<<x;
	}	
	friend void max(us us1,india india1);
};
class india
{
	private:
	int y;
	public:
	void setindia()
	{
		cout<<endl<<"Enter Number=>";
		cin>>y;
	}
	void printindia()
    {
    	cout<<endl<<"Number=>"<<y;
		}	
   friend void max(us us1,india india1);
   
};
void max(us us1, india india1)
   {
   	if(us1.x>india1.y)
   	{
   		cout<<endl<<"X is Max";
	   }
	   else 
	   {
	   	cout<<endl<<"Y is Max";
	   }
   }
main()
{
	us us1;
	india india1;
	us1.setus();
	us1.printus();
	india1.setindia();
	india1.printindia();
    max(us1,india1);
}
