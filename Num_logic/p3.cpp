//count the number of digits in the integer
#include<iostream>
using namespace std;

int main()
{
  int num,i=0,digit=0;
  cout<<"Enter the number ";
  cin>>num;
  while(num!=0)
  {
    num=num/10;
    digit++;
  }
  cout<<"The number of digit in the integer is ="<<digit<<endl;
  return 0;
}
