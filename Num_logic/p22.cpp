// neon number is n=(sum of all the digits in n²)

#include<iostream>
using namespace std;

int main()
{
    int num,sqnum,sum;
    cout<<"Enter the number to be checked for Neon number "<<endl;
    cin>>num;
    sqnum=num*num;
    sum=0;
    while(sqnum!=0)
    {
        sum=sum+(sqnum%10);
        sqnum=sqnum/10;
    }
    if(num==sum)
    {
    cout<<"The given number is a Neon number"<<endl;
    }
    else
    {

    cout<<"The given number is not  a Neon number"<<endl;

    }
    return 0;
}