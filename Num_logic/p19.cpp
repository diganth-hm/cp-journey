//Automorpic number

//An automorphic number is a positive integer whose square ends with the same digits as the number itself.  If the square does not end in the original number, it is not an automorphic number. 

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,dig=0,org_num,numsq;
    cout<<"Enter the number to be checked for Automorphic number"<<endl;
    cin>>num;
    org_num=num;
    numsq=num*num;
    while(num!=0)
    {
        num=num/10;
        dig++;
    }
    if(( org_num>0) && (org_num)==(numsq%(int)pow(10,dig))) 
    {
        cout<<"The give number is a Automorphic number"<<endl;
    }
    else
    {
      cout<<"The give number is not a Automorphic number"<<endl; 
    }
    return 0;
}
