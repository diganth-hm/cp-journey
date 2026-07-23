//Abundant number

//An abundant number (also called an excessive number) is a positive integer where the sum of its proper divisors (all divisors excluding the number itself) is greater than the number

#include<iostream>
using namespace std;

int main()
{
    int num,sum=0,i;
    cout<<"Enter the number to br checked for Abundant numbre"<<endl;
    cin>>num;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(num<0 || num!=sum)
    {
        cout<<"The given number is not a Abundant number"<<endl;
    }
    else
    {
        cout<<"The given number is a Abundant number"<<endl;
    }
    return 0;

}