#include<iostream>
using namespace std;

int main()
{
    int num,temp,sum,rem=0,i;
    cout<<"Enter the number to be checked for magic number"<<endl;
    cin>>num;
    temp=num;
    if(num<0)
    {
        cout<<"The given number is not a magic number"<<endl;
    }
    else
    {
          while (temp > 9)
         {
            sum=0;
            while (temp > 0)
             {
                rem = temp % 10;
                sum = sum+rem;
                temp /= 10;
            }
            temp = sum;
         }
        if((temp==1))
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