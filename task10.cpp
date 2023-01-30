#include<iostream>
using namespace std;
void print_till_number(int number);
main()
{
  int number;
  cout<<"Enter number:";
  cin>>number;
  print_till_number(number);
  


}
void print_till_number(int number)
{
  for(int count=1;count<=number;count=count+1)
  {
    cout<<count<<endl;
  }

}