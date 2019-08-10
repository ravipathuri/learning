/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
#include <iostream>
using namespace std;
/*
 Logic: Start from 400 in the increments of 20 to check if the number is divisible
        by all the numbers from 1 to 20
*/
int main()
{
	int smallestmultiple = 380,iteration=0;
 do{
    smallestmultiple+=20;
	for(int i=1;i<=20;i++)
	{
		if((smallestmultiple % i) != 0)
		{
			iteration = 0;
			break;
		}
	    else
	    {
	    	iteration++;
	    }
	    if(iteration == 20)
	    {
            break;
	    }
	    else;

	}
	
   }while(iteration == 0);  
	cout<<"smallest multiple divisible by first twenty natural numbers is "<<smallestmultiple<<endl;
	return 0;
}