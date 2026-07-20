//prime factor of a number
#include<iostream>
using namespace std;

int isPrime(int n)
{
  int i;
  if(n<=1)
  {
    return false;
  }
  if(n==2)
  {
    return true;
  }
  else
  {
    for(i=2;i<n;i++)
    {
        if(n%i!=0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
  }
  return 0;
}
int main()
{
    int num,i,pm=0;
    cout<<"Enter the number to get its prime factors"<<endl;
    cin>>num;
    cout<<"The prime factors of "<<num<<" are = ";
    for(i=1;i<=num;i++)
    {
        
      if((num%i==0) && (isPrime(i)))
      {
        cout<<i<<" ";
      }
    }
    return 0;
}