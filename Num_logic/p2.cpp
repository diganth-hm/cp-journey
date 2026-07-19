//sum of 1/n! for natural numbers
#include<iostream>
using namespace std;

float fact(float n)
{
    float fac=1,i;
    for(i=2;i<=n;i++)
    {
       fac=fac*i;
    }
    return fac;
}

int main()
{
  float num,sum=0;
  int i;
  cout<<"Enter the natural number mum :"<<endl;
  cin>>num;
  if(num<0)
  {
    cout<<"The number enterd should be a natural nunber "<<endl;

  }
  else
  {
    for(i=1;i<=num;i++)
    {
        sum=sum+(1/fact(i));
    }
    cout<<"The sum of 1/"<<num<<"! is = "<<sum<<endl;

  }
  return 0;
}
