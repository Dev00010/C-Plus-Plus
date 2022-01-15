#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream if1("A:\\C-FilePrograms\\abc.txt");
	char ch;
	int vowel=0,consonant=0;
	while(!if1.eof())
	{
		if1.get(ch);
		if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
		{
			cout<<ch;
		}	
		else
		{
			
		}
   }
	
	if1.close();
}
