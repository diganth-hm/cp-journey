//factorial of a number
#include<iostream>
using namespace std;

int main()
{
    float fac=1,i,n;
    cout<<"Enter the n for factorial of n"<<endl;
    cin>>n;
    if(n<1)
    {
        cout<<"The number should be greater than 0";
    }
    else
    {
      for(i=2;i<=n;i++)
       {
         fac=fac*i;
       }
    }
    cout<<"The factorial of "<<n<<" is = "<<fac<<endl;
    return 0;
}