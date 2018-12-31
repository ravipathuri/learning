

/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

  What is the 10001st prime number?*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int count=0;//to track the no.of prime numbers
  int requiredprimenumber,number=2;
  bool isPrime=true;
  while(count<10001)
    {
      for(int i=2;i<=sqrt(number);i++)
	{
	  if(number%i == 0)
	    isPrime=false;
	}
      if(isPrime)
	{
	  count++;
	  requiredprimenumber = number;
	}
      number++;
      isPrime = true;
    }
  cout<<count<<" prime number is "<<requiredprimenumber<<endl;
  return 0;
}
