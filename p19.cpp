#include<iostream>
#include<iomanip>
using namespace std;

int main()
{          
       int no1,no2;
       char opertion;
        cout<<"Enter the operation::";
       cin>>opertion;
       cout<<"Enter the number 1::";
       cin>>no1;
       cout<<"Enter the number 2::";
       cin>>no2;
        switch (opertion)
        
        {
        case '+':
         cout<<"result::"<<no1+no2;
            break;
        case '-' :
        cout<<"result::"<<no1-no2;
        break;

        case '*' :
        cout<<"result::"<<no1 * no2;
        break;
           case '/' :
        cout<<"result::"<<no1 / no2;
        break;
        default:
        cout<<"invalid....";
    
        }
              
    return 0;
}