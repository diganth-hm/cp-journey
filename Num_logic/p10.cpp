//LCM of two numbers
#include<iostream>
using namespace std;

int main()
{
    int n1,n2,lcm=0,i,j;
    cout<<"Enter the two numbers to check for LCM"<<endl;
    cin>>n1>>n2;
    lcm=(n1*10);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if((n1*i)==(n2*j) && ((n1*i)<lcm))
            {
                lcm=(n1*i);
            }
        }
    }
    cout<<"The LCM of "<<n1<<" and "<<n2<<" is = "<<lcm<<endl;
    return 0;

}