//Harshad number
#include<iostream>
using namespace std;

int main()
{
    int num,rem,div=0,res=0,org_num;
    cout<<"Enter  the number to be checked for Harshad number"<<endl;
    cin>>num;
    org_num=num;
    if(num<0)
    {
        cout<<"The given number is not a Harshad number"<<endl;
    }
    else
    {
        while(num!=0)
        {
          rem=num%10;
          div=div+rem;
          num=num/10;
        }
        if(org_num%div==0)
        {
            cout<<"The given number is a Harshad number "<<endl;
        }
        else
        {
            cout<<"The given number is not a Harshad number"<<endl;
        }

    }
    return 0;
}
