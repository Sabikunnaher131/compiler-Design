#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, singleLine = "", multiLine = "";
    cout << "Enter text with comments (end input with '~'):\n";
    getline(cin, s, '~');
    int len = s.length();
    for (int i = 0; i < len - 1; i++)
    {
        if (s[i] == '/' && s[i + 1] == '/')
        {
            i += 2;
            while (i < len && s[i] != '\n')
            {
                singleLine += s[i++];
            }
            singleLine += '\n';
        }
    }
    cout << "\nSingle line comments: "<<endl << singleLine << endl;
    for (int i = 0; i < len - 1; i++)
    {
        if (s[i] == '/' && s[i + 1] == '*')
        {
            i += 2;
            while (i < len - 1 && !(s[i] == '*' && s[i + 1] == '/'))
            {
multiLine += s[i++];
}
multiLine += '\n';
}
}
cout << "\nMultiple line comments: "<<endl << multiLine << endl;
return 0;
}
