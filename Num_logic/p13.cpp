//check perfect square number 

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int num;  
  cout<<"Enter the number to be cheked for a perfect square number"<<endl;
  cin>>num;
  if(num<0)
  {
    cout<<"its not a perfect square number "<<endl; 
  }
  else
  {
     if(num == ((sqrt(num)*sqrt(num))))
     {
      cout<<"It is a perfect square number"<<endl;
     }
     else
     {
       cout<<"its not a perfect square number "<<endl; 
     }
  }
  return 0;
}