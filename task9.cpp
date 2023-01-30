#include<iostream>
using namespace std;
int positive_number(int);
main()
{
    int number;
    cout<<"number:";
    cin>>number;
    int result=positive_number(number);
    
}
int positive_number(int number)
{
   while(number<=0)
   {
    cout<<"enter positive number:"<<endl;
    cout<<"enter again number:";
    cin>>number;
   }
     return number;
}