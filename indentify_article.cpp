#include<bits/stdc++.h>
using namespace std;
int main()
{

cout<<"Enter any string: ";
string s, token;
getline(cin,s,'~');
int a = 0, an = 0, the = 0;
stringstream S(s);
while (S >> token)
{

if (token == "an" || token == "An") an++;
else if (token == "a" || token == "A") a++;
else if (token == "the" || token == "The") the++;
}
cout << "\nAnalysis of the given input:\n";
cout << "An: " << an << endl;
cout << "A: " << a << endl;
cout << "The: " << the << endl;
return 0;
}

