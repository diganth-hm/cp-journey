//Write a program to compute x^n/n!.
#include<iostream>
#include<cmath>
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
   int num,sum=0 ,x;
   float i;
   cout<<"Enter the number x that is in x^n/n!  :"<<endl;
   cin>>x;
   cout<<"Enter the number n in the x^n/n! :"<<endl;
   cin>>num;
   if(num<1)
   {
      cout<<"The number entered should be greater than  0"<<endl;
   }
   else
   {
    sum=pow(x,num)/fact(num);
   cout<<"The Answer of "<<x<<"^"<<num<<"/"<<num<<"! is = "<<sum<<endl;
   }
   return 0;

  
}