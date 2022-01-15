#include<iostream> 
using namespace std; 
class Weight 
{ 
    int kg; 
    public: 
    Weight(int x) 
	{ 
        kg=x/100; 
    }  
    Weight() 
   { 
       kg=0; 
   } 
    void WeightPrint() 
	{ 
      cout<<"\nKg = "<<kg; 
    }
    };
main()
{
	Weight w1; 
    int grams=200; 
    cout<<"\nGrams = "<<grams; 
    w1=grams; // basic to class 
    w1.WeightPrint(); 
}
