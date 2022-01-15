#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream if1("A:\\C-FilePrograms\\abc.txt");
	ofstream of1("A:\\C-FilePrograms\\copy.txt");
	char ch;
	while (!if1.eof())
	{
		if1.get(ch);
		of1<<ch;
	}
	if1.close();
	of1.close();
	cout<<endl<<"!!!Copied!!!";
}
