#include<iostream>
using namespace std;
void printfibonacci(int);
main()
{
  int number;
  cout<<"Enter Number:" ;
  cin>>number; 
  printfibonacci(number);
}
void printfibonacci(int number)
{
   int num1=0;
   int num2=1;
   int next;
   cout<<num1<<","<<num2<<",";
   for(int count=1;count<=number;count++)
   {
    next=num1+num2;
    num1=num2;
    num2=next;

    cout<<next<<",";
   }
   
  }



