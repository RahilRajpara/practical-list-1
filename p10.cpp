#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the number 1::";
    cin >> a;
    cout << "Enter the number 2::";
    cin >> b;
    cout << "Enter the number 3::";
    cin >> c;
    if (a > b && a > c)

    {
        cout << "large number::" << a;
    }
    else if (b > a && b > c)
    {
        cout << "large number::" << b;
    }
    else
    {
        cout << "large number::" << c;
    }

    return 0;
}