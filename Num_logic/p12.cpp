//check prime number

#include<iostream>
using namespace std;

int isPrime(int n)
{
  int i,n;
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
    int n;
    cout<<"Enter th enumber to check wheather its a prim enumber or not "<<endl;
    cin>>n;
    if(isPrime(n))
    {
        cout<<"it is a prime number";

    }
    else
    {
        cout<<"its not a prime number";

    }
    return 0;
}