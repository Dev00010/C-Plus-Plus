#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream if1("A:\\C-FilePrograms\\abc.txt");
	char ch;
	
	while(!if1.eof())
	{
		if1.get(ch);
		cout<<ch;
	}
	
	if1.close();
}
