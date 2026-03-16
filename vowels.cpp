#include <iostream>
using namespace std;

int main()
{
    string str;
    int vowel = 0, consonant = 0, digit = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }

    cout << "Vowels: " << vowel << endl;
    cout << "Consonants: " << consonant << endl;
    cout << "Digits: " << digit << endl;

    return 0;
}
