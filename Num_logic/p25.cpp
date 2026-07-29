// sunny number


#include<iostream>
#include<cmath>
using namespace std;

int Psq(int num)
{
 
  if(num<0)
  {
    return false; 
  }
  else
  {
     if(num == ((sqrt(num)*sqrt(num))))
     {
       return true;
     }
     else
     {
       return false;
     }
  }
  
}

int main()

{
    int num;
    cout<<"Enter the nuumber to be checked for sunny number "<<endl;
    cin>>num;
    num=num+1;
    if(Psq(num))
    {
        cout<<"The given number is a Sunny Number "<<endl;
    }
    else
    {
        cout<<"The given number is not a Sunny Number "<<endl;
    }
    return 0;
}