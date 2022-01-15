#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream if1("A:\\C-FilePrograms\\America.txt");
	ifstream if2("A:\\C-FilePrograms\\Russia.txt");
	ofstream of1("A:\\C-FilePrograms\\America-Russia.txt");
	char ch;
	while (!if1.eof())
	{
		if1.get(ch);
		of1<<ch;
	}
	while (!if2.eof())
	{
		if2.get(ch);
		of1<<ch;
	}
	if1.close();
	if2.close();
	of1.close();
	cout<<endl<<"!!!Copied!!!";
}
