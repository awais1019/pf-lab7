#include<iostream>
using namespace std;
int GCD(int number1,int number2);
int LCM(int number1,int number2);
main(){
int number1,number2,resultOfGCD,resultOfLCM;
cout << "Enter 1st Number : ";
cin >> number1; 
cout << "Enter 2nd Number : ";
cin >> number2;
resultOfGCD=GCD(number1,number2);
cout << "GCD or HCF of numbers "<<number1<<" and "<<number2<<" is "<<resultOfGCD<<endl;
resultOfLCM=LCM(number1,number2);
cout << "LCM of numbers "<<number1<<" and "<<number2<<" is "<<resultOfLCM;
}
int GCD(int number1,int number2)
{
    int GCD;
   for(int count=1;count<=number1;count++)
   {
     if(number1%count==0&&number2%count==0)
      GCD=count;
   }
   return GCD;
}

int LCM(int number1,int number2){
int LCM;
LCM=(number1*number2)/GCD(number1,number2);
return LCM;
}


