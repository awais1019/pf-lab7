#include<iostream>
using namespace std;
float calculatemoney(float,int);
main()
{
    float money;
    int year;
    cout<<"money:";
    cin>>money;
    cout<<"year:";
    cin>>year;
  float result=calculatemoney(money,year);
  if(result<money)
  {
    cout<<"you have "<<result<<" money left  :";   
  }
  else
   cout<<"you need "<<result<<" money more";
     





}
float calculatemoney(float money,int year)
{
  

   float remaining_money;
   int age=18;
   
   for(int cnt=1800;cnt<=year;cnt++)
  {

   if (cnt%2==0)
   {
    money=money-12000;
    remaining_money=money;
    
   } 

  if(cnt%2!=0)
  {
    money=money-(12000+50*age);
    remaining_money=money;
    age=age+2;

   } 
 }
   return remaining_money;

}

