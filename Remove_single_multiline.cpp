#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input, output = "";
    cout << "Enter text with comments (end input with '~'):"<<endl;
    getline(cin, input, '~');
    int n = input.length();
    for (int i = 0; i < n; i++)
    {
        if (input[i] == '/' && input[i + 1] == '/')
        {
            i += 2;
            while (i < n && input[i] != '\n')
                i++;
            output += '\n';
        }
        else if (input[i] == '/' && input[i + 1] == '*')
        {
            i += 2;
            while (i < n - 1 && !(input[i] == '*' && input[i + 1] == '/'))
                i++;
            i++;
        }
        else
        {
            output += input[i];
        }
}
cout << "\nCode without comments:"<<endl;
cout << output<<endl;
return 0;
}
