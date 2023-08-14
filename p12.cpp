#include <iostream>
using namespace std;

int main()
{
    int i, num, sum;

    cout << "Enter any number ::";
    cin >> num;
    for (i = 1; i <= 10; i++)
    {
        sum = num * i;
        cout << num << "*" << i << "=" << sum << endl;
    }
    return 0;
}