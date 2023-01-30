#include<iostream>
using namespace std;
int totaldigit(int number);
main()
{   
    int number;
    cout<<"enter number:";
    cin>>number;
    int result=totaldigit(number);
    cout<<"Number of digits is:"<<result;




}
int totaldigit(int number)
{
    int count=0;
    while(number>0)
    {
    number=number/10;    
    count=count+1;
    }
    return count;
}    