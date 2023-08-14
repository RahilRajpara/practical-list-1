#include<iostream>
using namespace std;


int natural(int n)
{

    int a;
    a=(n*(n+1))/2;
    return a;

}

int main()
{
       int num;
       cout<<"Enter the number ::";
       cin>>num;
       num=natural(num);
       cout<<"\n\n\n\t sum of natural number is ::"<<num;

}