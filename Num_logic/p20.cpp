#include<iostream>
using namespace std;

int main()
{
    int num,org_num,sum=0,dig=0,i;
    cout<<"Enter the number to be checked for magic number"<<endl;
    cin>>num;
    org_num=num;
    if(num<0)
    {
        cout<<"The given number is not a magic number"<<endl;
    }
    else
    {
        while(num!=0)
        {
            num=num/10;
            dig++;
        }
        for(i=0;i<dig;i++)
        {
            
        }
        if((sum==1))
        {
          cout<<"The given number is  a magic number"<<endl;
        }
        else
        {
            cout<<"The given number is not a magic number"<<endl;
        }
    }
    return 0;
}