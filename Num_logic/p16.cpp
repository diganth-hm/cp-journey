// Perfect number
#include<iostream>
using namespace std;

int main()
{
    int num,res=0,i;
    cout<<"Enter the number to be checked for perfect number"<<endl;
    cin>>num;
    if(num<0)
    {
        cout<<"The given number is not a perfect number"<<endl;
    }
    else
    {
        for(i=1;i<num;i++)
        {
           if(num%i==0)
           {
            res=res+i;
           }
        }
        if(num==res)
        {
            cout<<"The given number is a Perfect number"<<endl;
        }
        else
        {
           cout<<"The given number is not a perfect number"<<endl; 
        }
    }
    return 0;
}
