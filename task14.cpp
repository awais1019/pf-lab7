#include<iostream>
using namespace std;
void calculatemoney(float,float,float );
main()
{
    float age,washing_price,price_toy;
    cout<<"Age:";
    cin>>age;
    cout<<"Washing_machine_price:";
    cin>>washing_price;
    cout<<"Unit price of toy:";
    cin>>price_toy;
    calculatemoney(age,washing_price,price_toy);
     





}
void calculatemoney(float age,float washing_price,float price_toy)
{
   float number_of_toys=0;
   float price_of_saving=0;
   float save=0;
   float number=10;
   int total;
   int remaining;
   int out;


   
   for(int cnt=1;cnt<=age;cnt++)
  {
   if (cnt%2!=0)
   {
    number_of_toys++; 

   } 
   else
   {
     save=save+number-1;
     number=number+10;    
   } 
   }
    price_of_saving=number_of_toys*price_toy;
    total=save+price_of_saving;
    if(total>washing_price)
      {
      remaining=total-washing_price;
      cout<<"YES"<<endl<<"you have "<<remaining<<" rupees";
      }
     else 
     {
       remaining=washing_price-total;
       cout<<"NO"<<endl<<"you need "<<remaining<<" rupees";
     }
      


}

