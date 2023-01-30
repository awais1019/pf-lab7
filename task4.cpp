#include<iostream>
using namespace std;
int totaldigit(int,int);
main()
{   
    int number,digit;
    cout<<"enter number:";
    cin>>number;
    cout<<"Enter digit:";
    cin>>digit;
    int result=totaldigit(number,digit);
    cout<<result;




}
int totaldigit(int number,int digit)
{
int count,digitCounter=0;
while(number!=0)
{
count=number%10;
number=number/10;
if(count==digit)
{
digitCounter++;
}
}
return digitCounter;
}

