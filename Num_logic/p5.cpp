//sum of all the digits in the number  
#include<iostream>
using namespace std;

int main()
{
  int num,i=0,sum=0,rem=0;
  cout<<"Enter the number ";
  cin>>num;
  while(num!=0)
  {
    rem=num%10;
    num=num/10;
    sum=sum+rem;
    
  }
  cout<<"The sum of digits in the integer is ="<<sum<<endl;
  return 0;
}
