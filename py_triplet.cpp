
/** 
  A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
  a2 + b2 = c2

  For example, 32 + 42 = 9 + 16 = 25 = 52.

  There exists exactly one Pythagorean triplet for which a + b + c = 1000.
  Find the product abc.
*/
/**
  Solution: using the concept

 */
#include<iostream>
#include<math.h>
using namespace std;

bool isPerfectSquare(long double result)
{
  // Find floating point value of  
  // square root of x. 
  long double sr = sqrt(result); 
  
  // If square root is an integer 
  return ((sr - floor(sr)) == 0); 
}
int main()
{
	int a,b,c;
  long double result;
  bool sumAcheived = false;
   b=2;

  while(!sumAcheived)
  {
    for(a=1;a<b;++a)
    {
      result = (a*a)+(b*b);
      if(isPerfectSquare(result))
      {
        c = sqrt(result);
        cout<<"Triplets "<<a<<" "<<b<<" "<<c<<endl;
        if((a+b+c) == 1000)
        {
          sumAcheived = true;
          cout<<"sum acheived"<<endl;
        }
      }      
    }

    b++;
  }

   return 0;
}