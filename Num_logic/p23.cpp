//A spy number is a positive integer where the sum of its digits is exactly equal to the product of its digits. 


#include<iostream>
using namespace std;

int main()
{
    int num,sum,prod,temp;
    cout<<"Enter the number to be checked for spy number "<<endl;
    cin>>num;
    sum=0;
    prod=1;
    temp=num;
    while(num!=0)
    {
        sum=sum+(num%10);
        prod=prod*(num%10);
        num=num/10;
    }
    if((sum==prod) && (temp>0))
    {
        cout<<"The given number is a Spy number "<<endl;
    }
    else
    {
          cout<<"The given number is not a Spy number "<<endl;
    }
    return 0;
}