#include<iostream>
#include<cmath>
using namespace std;
void armstrong(int num,int temp)
{
    int mod=0,rem;
    
    while(num>0)
    {
        rem=num%10;
        mod = mod+pow(rem,3);
        num=num/10;
    }
    if (mod==temp)
    {
        cout<<":: is armstrong number...."; /* code */
    }
    else
    {
        cout<<":: not armstrong number....";
    }
}
int main()
{
     int num,temp;
     cout<<"Enter the number::";
     cin>>num;
     temp=num;
     armstrong(num,temp);

    return 0;
}