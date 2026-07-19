//sum of n naturals numbers
#include<iostream>
using namespace std;
int main()
{
    int num,i,sum=0;
    cout<<"Enter the natural  number "<<endl;
    cin>>num;
    if(num<0)
    {
        cout<<"The number should be a natural number "<<endl;
    }
    else{
        for(i=1;i<=num;i++)
        {
            sum=sum+i;
        }
    cout<<"The sum of  "<<num<<" is =  "<<sum<<endl;

    }
    return 0;
}