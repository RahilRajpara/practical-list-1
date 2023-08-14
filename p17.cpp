#include<iostream>
#include<cmath>
using namespace std;
void fibonacic(int num)
{
    int f1=0,f2=1,f3=0,i;

  cout<<":"<<f1;
  cout<<":"<<f2;
     for(i=0;i<num-2;i++)
     {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        cout<<"::"<<f3<<"::";
     }
}
int main()
{

    int num;
    cout<<"Enter the total number you want to fibonacic serise ::";
    cin>>num;
         
   fibonacic(num);
    return 0;
}