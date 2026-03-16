#include <iostream>
using namespace std;
int main()
{
   string str;
cout << "Enter 3 characters: ";
    getline(cin, str);
cout << "Next 3 characters are: ";
    for (int i = 0; i < 3 && i < str.length(); i++)
    {
        cout << char(str[i] + 3) << " ";
    }
return 0;
}
