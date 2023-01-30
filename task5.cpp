#include<iostream>
using namespace std;
int totalsum(int);
main()
{
int number;
cout<<"Enter number:";
cin>>number;
int result=totalsum(number);
cout<<"Sum of all digits is:"<<result;



}
int totalsum(int number)
{
  int sum=0;
  int digit;
  while(number!=0)
  {
    digit=number%10;
    sum=sum+digit;
    number=number/10;

  }
     return sum;



}
