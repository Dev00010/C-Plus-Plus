#include<iostream> 
using namespace std; 
class Weight 
  { 
     int grams; 
    public:
	weight()
	{
		grams=0; 
    } 
    Weight(int g) 
    { 
      grams=g; 
    } 
    void showData() 
    { 
      cout<<"\nGrams = "<<grams;
	} 
      operator float() 
      { 
         return grams/1000; 
      } 
};
 
main() 
  { 
     Weight w1(5000); 
     w1.showData(); 
      float kg=w1; //	Class To Basic Conversion
     cout<<"\nKg ="<<kg; 
     return 0; 
  }  
