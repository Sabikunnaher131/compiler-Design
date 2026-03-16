#include <iostream>
using namespace std;
int main()
{  string name;
    cout << "Enter full name: ";
    getline(cin, name);
 cout << "Initials: ";
 if (name.length() > 0)
    {
        cout << char(toupper(name[0])) << " ";
    }
for (int i = 1; i < name.length(); i++)
    {
        if (name[i - 1] == ' ' && name[i] != ' ')
        {
            cout << char(toupper(name[i])) << " ";
        }
    }
return 0;
}
