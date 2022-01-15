#include<iostream>
using namespace std;
class usa
{
	protected:
	int x;
	public:
		void setusa()
		{
			cout<<endl<<"Enter Number=>";
			cin>>x;
		}
		void printusa()
		{
			cout<<endl<<"X=>"<<x;
		}
};
class india : public usa
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
			cout<<endl<<"Y=>"<<y;
		}
		void multiply()
		{
			cout<<endl<<"Multiple=>"<<x*y;
		}
};
main()
{
	india i1;
	i1.setusa();
	i1.printusa();
	i1.setindia();
	i1.printindia();
	i1.multiply();
}
