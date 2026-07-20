//GCD or HCF of two numbers
#include<iostream>
using namespace std;

int main()
{
    int n1,n2,hcf=0,i,num=0;
    cout<<"Enter the two numbers to check for GCD or HCF"<<endl;
    cin>>n1>>n2;
    for(i=1;i<=n1;i++)
    {
        if((n1%i==0) && (n2%i==0))
        {
            if(i>hcf)
            {
                hcf=i;
            }
        }
    }
    cout<<"The HCF or GCD of "<<n1<<" and "<<n2<<" is = "<<hcf<<endl;
    return 0;

}