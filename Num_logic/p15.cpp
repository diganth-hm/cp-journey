//strong number
#include<iostream>
using namespace std;

int fact(int n)
{
    int fac=1,i;
    for(i=2;i<=n;i++)
    {
       fac=fac*i;
    }
    return fac;
}

int main()
{
    int num,org_num,rem,res=0;
    cout<<"Enter the number to be checked for strong number"<<endl;
    cin>>num;
    org_num=num;
    if(num<0)
    {
        cout<<"The given number is not a strong number"<<endl;  
    }
    else
    {
        while(num!=0)
        {
            rem=num%10;
            res=res+fact(rem);
            num=num/10;

        }
        if(org_num==res)
        {
            cout<<"The given number is a strong number"<<endl;
        }
        else
        {
            cout<<"The given number is not a strong number"<<endl;  
        }

    }
    return 0;
}


