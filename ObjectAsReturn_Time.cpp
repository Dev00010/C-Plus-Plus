#include<iostream>
using namespace std;
class time
{
	private:
	int minutes,hour;
	public:
		void setdata()
		{
			cout<<endl<<"Enter time in minutes=>";
			cin>>minutes;
			cout<<endl<<"Enter time in hour=>";
			cin>>hour;
		}
		void printdata()
		{
			cout<<endl<<"Minutes=>"<<minutes<<" Hour=>"<<hour;
		}
		time add(time t2)
		{
			time tmp;
			int x=minutes+t2.minutes;
			int y=hour+t2.hour;
			tmp.hour=y+(x/60);
			tmp.minutes=x%60;
			return tmp;
		}
		
};
main()
{
	time t1,t2,t3;
	t1.setdata();
	t2.setdata();
	t1.printdata();
	t2.printdata();
	t3=t1.add(t2);
	t3.printdata();

}
