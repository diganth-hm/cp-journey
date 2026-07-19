//palindrome
#include<iostream>
using namespace std;

int main()
{
  int num,org_num,i=0,rem=0,rev=0;
  cout<<"Enter the number ";
  cin>>num;
  org_num=num;
  while(num!=0)
  {
    rem=num%10;
    rev=(rev*10)+rem;
    num=num/10;
   
    
  }
  if(org_num==rev)
  {
    cout<<"The give number is a palindrome"<<endl;
  }
  else
  {
    cout<<"The given number is not a palindrome"<<endl;
  }
  return 0;
}
