#include<iostream> 
using namespace std; 
class student 
{ 
    int rollno;  
    char name[20]; 
    int marks_eng,marks_hindi;
	public:
	void setstudent()
	{
		 cout<<"\nEnter Rollno =>"; 
         cin>>rollno; 
         cout<<"\nEnter name =>"; 
         cin>>name; 
         cout<<"\nEnter Marks of English =>";  cin>>marks_eng; 
         cout<<"\nEnter Marks of Hindi =>";  cin>>marks_hindi; 
   }
   
   void printstudent()
   {
   	    cout<<"\nNo = "<<rollno<<" Name = "<<name <<" Marks of English = "<<marks_eng<<" Hindi = "<<marks_hindi; 
	}
	
	int getenglish()
	{
		return marks_eng;
	 } 
	 int gethindi()
	 {
	 	return marks_hindi;
	 }
};

class marks
{
	int total;
	public:
		marks()
		{
			total=0;
		}
		marks(student s1)
		{
			total=s1.getenglish()+s1.gethindi();
		}
		void printtotal()
		{
			cout<<endl<<"Total=>"<<total;
		}
};

main()
{
	student s1;
	marks m1;
	s1.setstudent();
	m1=s1;
	m1.printtotal();
	return 0;
}
