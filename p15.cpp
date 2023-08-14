#include<iostream>
using namespace std;
int isprime(int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
         if (n%1==0)
         {
            return false; /* code */
         }
         /* code */
    }
return true;
}
int main()
{
       int num;
    cout<<"Enter the number :::";
    cin>>num;
  if(isprime(num))
      {
      cout<<"prime"<<num<<endl ;  /* code */
      }
      else
      {
      cout<<"not prime....";}
    return 0;
}