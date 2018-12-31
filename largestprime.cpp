#include <iostream>
#include <math.h>
using namespace std;
//What is the largest prime factor of the number 600851475143 ?
int main() {
	unsigned long long int inputnumber = 600851475143,largestprimefactor=1,iteration;
	
	for(iteration = 2; iteration  <= sqrt(inputnumber); iteration++)
	{
	    if(600851475143%iteration == 0)//iteration is a factor of 600851475143
	    {//check whether iteration is prime or not
	      bool isPrime=true;
	       unsigned long long int iter =0;
	       for(iter=2;iter<=(sqrt(iteration));iter++)//check for factors of iteration
	       {
	           if(iteration%iter == 0)
	           {
		     isPrime = false;
	           }
	       }
	       
	       if(isPrime)
	        {
	            largestprimefactor = iteration;
	        }
	    }
	}
	
cout<<"hi"<<endl;
cout<<"larget prime factor of "<< inputnumber<<" is "<<largestprimefactor<<endl;
return 0;
}
