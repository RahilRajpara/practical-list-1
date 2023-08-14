#include <iostream>
using namespace std;

void isVowel(char ch)
{

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        cout << "vowel..";
    }
    else
    {
        cout << "consonont...";
    }
}

int main()
{
    char character;

    cout << "Enter a character: ";
    cin >> character;

    isVowel(character);

    return 0;
}
