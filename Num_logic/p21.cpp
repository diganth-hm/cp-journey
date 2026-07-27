//In number theory, a friendly pair consists of two distinct natural numbers that share the same abundancy index, defined as the ratio of the sum of all divisors of a number to the number itself.  Mathematically, two numbers n and m form a friendly pair if:


#include<iostream>
using namespace std;

float Abun(int n)
{
    float sum=0,div;
    int i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
           
        }

    }
    div=sum/n;
    return div;
}


int main()

{
    int num1,num2;
    cout<<"Enter the two numbers to be checked for a Friendly pair "<<endl;
    cin>>num1;
    cin>>num2;
    if(Abun(num1)==Abun(num2))
    {
        cout<<"The givens number are  a pair of Friendly numbers"<<endl;
    }
    else
    {
         cout<<"The givens number are not a pair of Friendly numbers"<<endl;
    }
    return 0;
}