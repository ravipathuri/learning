/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/

#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(int num)
{
    int tmp=num,reversedvalue=0;
    while(tmp>0)
    {
       
        reversedvalue = (reversedvalue*10)+(tmp%10);
         tmp= tmp/10;
        
        }
  if(reversedvalue == num)
  {
      return true;
      }
      return false;
    }
int main()
{
  int largestPalindrome=0,product=0,num1,num2;
  
  for(num1=100;num1<1000;num1++)
  {
      for(num2=100;num2<1000;num2++)
      {
          product = num1*num2;
          
          if(isPalindrome(product))
          {
              if(product>largestPalindrome)
              {
              largestPalindrome = product;
              }
              }
      }
      }
 cout<<"Largest Palindrome for product of two 3 digit nos is "<<largestPalindrome<<endl;
  return 0;
}
