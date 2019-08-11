/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million(2,000,000).

*/

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(long long int samplenumber)
{
	bool isPrime = true;
   for(long int i=2; i<= sqrt(samplenumber); i++)
   {
      if((samplenumber % i) == 0)
      {
        isPrime = false;
        break;
      }
   }
   return isPrime;
}

int main()
{
	long long int sumofprimes=0,samplenumber=2;

    for(samplenumber = 2; samplenumber <=2000000; samplenumber++)
    {
    	bool isPrimeNumber = isPrime(samplenumber);
    	if(isPrimeNumber)
    	{
    		sumofprimes+=samplenumber;
    	}
    }
    cout<<"Sum of all the primes below two million= "<<sumofprimes<<endl;	
	return 0;
}