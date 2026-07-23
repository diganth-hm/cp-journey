//Armstrong number
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,n,res=0,rem,org_num,temp;
    //n is the number of digits
    cout<<"Enter the number to be checked for Armstrong"<<endl;
    cin>>num;
    org_num=num;
    temp=num;
    if(num<0)
    {
        cout<<"The given number is not Armstrong number"<<endl;
    }
    else
    {
        while(temp!=0)
        {
            temp=temp/10;
            n++;
        }
        while(num!=0)
        {
        rem=num%10;
        res=res+pow(rem,n);
        num=num/10;
        }
    
        if(org_num == res)
        {
            cout<<"The given number is a Armstrong number"<<endl;
        }
        else
        {
            cout<<"The given number is not Armstrong number"<<endl;
        }
    }
    return 0;
}