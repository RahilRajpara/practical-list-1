#include<iostream>
#include<cmath>
using namespace std;
int ispower(int base,int power)
{
    int result;
       result = pow(base,power);
       
       return result;

}
int main()
{
  int base,power,res;

  cout<<"enter the base::";
 cin>>base;
 cout<<"Enter the power";
 cin>>power;
     res=ispower(base,power);
     cout<<"power is::::"<<res;
   return 0; 
}