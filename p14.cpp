#include <iostream>
using namespace std;

void pelidrom(int temp)
{

    int rem, rev = 0;
    while (temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp= temp % 10;
    }
    if (rev == temp)
    {
        cout << rev << ": is pelidrom number";
    }
    else
    {
        cout <<rev << ":is not pelidrom...";
    }
}
int main()
{
    int temp;
    cout << "Enter the number ::";
    cin >> temp;
    pelidrom(temp);
    return 0;
}
