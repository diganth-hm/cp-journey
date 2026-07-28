//A happy number is a positive integer that eventually reaches 1 when you repeatedly replace it with the sum of the squares of its digits.  If the process enters a cycle that does not include 1, the number is called unhappy (or sad)

#include<iostream>
using namespace std;

int Sqsum(int num)
{
    int sq,sum;
    sq=1;
    sum=0;
    while(num!=0)
    {
        sq=(num%10)*(num%10);
        sum=sum+sq;
        num=num/10;

    }
    return sum;
}

int main()
{
    int num,sum,temp;
    cout<<"Enter the numebr to be checked for Happy Number "<<endl;
    cin>>num;
    sum=Sqsum(num);
    temp=sum;
    while(temp!=0)
    {
        
        sum=Sqsum(sum);
        temp=sum;
        temp=temp/10;
    }
     
    if((num>0) && (sum==1))
    {
        cout<<"The given numeber is a Happy Number "<<endl;
    } 
    else
    {

        cout<<"The given numeber is not a Happy Number "<<endl;
    }
    return 0;
}