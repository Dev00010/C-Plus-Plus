#include<iostream>
using namespace std;
template<class t1, class t2>
class math
{
	private:
		t1 a;
		t2 b;
		public:
			math(t1 x,t2 y)
			{
			a=x;
			b=y;	
			}
			void printdata()
			{
				cout<<"A="<<a<<" B="<<b<<endl;
			}
};
main()
{
	math<int,float> m1(5,6.5);
	math<float,char> m2(6.5,'r');
	math<char,int> m3('a',10);
	m1.printdata();
	m2.printdata();
	m3.printdata();
}
