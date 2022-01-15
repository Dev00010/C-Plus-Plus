#include<iostream>
using namespace std;
template<class t>
class math
{
	private:
		t a,b;
		public:
			math(t x,t y)
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
	math<int> m1(5,6);
	math<float> m2(6.5,8.6);
	math<char> m3('a','b');
	m1.printdata();
	m2.printdata();
	m3.printdata();
}
