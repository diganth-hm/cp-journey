#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,temp,sum=0,count=0,digit=0;
    cout<<"Enter the number to be checked for Disarium number"<<endl;
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }

    temp=num;

    while(temp!=0)
    {
      digit=temp%10;
      sum=sum+pow(digit,count);
      temp=temp/10;
      count--;
    }
    if(sum==num && num>0)
    {
        cout<<"The given number  is a Disarium number "<<endl;
    }
    else
    {
         cout<<"The given number  is not a Disarium number "<<endl;
    }
    return 0;
}