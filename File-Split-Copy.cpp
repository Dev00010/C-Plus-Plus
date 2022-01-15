#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream if1("A:\\C-FilePrograms\\abc.txt");
	ofstream of1("A:\\C-FilePrograms\\vowel.txt");
	ofstream of2("A:\\C-FilePrograms\\consonant.txt");
	char ch;
	while (!if1.eof())
	{
		if1.get(ch);
		if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
		{
		   of1<<ch;
	    }
	    else
	    {
	    	of2<<ch;
		}
	}
	if1.close();
	of1.close();
	of2.close();
	cout<<endl<<"!!!Copied!!!";
}
