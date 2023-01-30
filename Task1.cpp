#include<iostream>
using namespace std;
void Table(int);
main()
{
  int number; 
  cout<<"Enter number:";
  cin>>number; 
  Table(number); 


}
void Table(int number)
{
  for(int count=1;count<=10; count=count+1)
  {
    int table=number*count;
    cout<<number<<"*"<<count<<"="<<table<<endl;
  }
    

}