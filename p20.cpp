#include<iostream>
using namespace std;

int factorial(int n)
{

    int a;
    if (n==1)
    
    {
     return 1;   /* code */
    }
    else
    {
        a=n*factorial(n-1);
    
    return a;
    }
}
int main()
{
       int num;
       cout<<"Enter the number ::";
       cin>>num;
       num=factorial(num);
       cout<<"\n\n\n\t Factorial of number is ::"<<num;

}