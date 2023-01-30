#include<iostream>
using namespace std;
void percentage(float);
main()
{
    float number;
    cout<<"Enter number:";
    cin>>number;
    percentage(number);
}
 void percentage(float number)
 {
    float number1;
    float p1=0,p2=0,p3=0,p4=0,p5=0;
   for(float i=1;i<=number;i++)
   {
     cin>>number1;
    if(number1>=1&&number1<=199)
    {
     p1=p1+1;
    }
     if(number1>=200&&number1<=399)
    {
     p2=p2+1;
    }
    if(number1>=400&&number1<=599)
    {
     p3=p3+1;
    }
     if(number1>=600&&number1<=799)
    {
     p4=p4+1;
    }
    if(number1>=800)
    {
     p5=p5+1;
    }
   }
   float percentage1=(p1/number)*100;
   float percentage2=(p2/number)*100;
   float percentage3=(p3/number)*100;
   float percentage4=(p4/number)*100;
   float percentage5=(p5/number)*100;
   cout<<percentage1<<endl;
   cout<<percentage2<<endl;
   cout<<percentage3<<endl;
   cout<<percentage4<<endl;
   cout<<percentage5<<endl;



 }
